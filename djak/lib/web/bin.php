<?php
//                     PUBLIC DOMAIN by O'ksi'D
//
//             The authors disclaim copyright to this software.
//

$data_dir = dirname(dirname(dirname(dirname(__FILE__)))) . "/data";

ini_set("session.use_strict_mode", 1);
ini_set("session.use_cookies", 0);
ini_set("session.use_only_cookies", 0);
ini_set("session.use_trans_sid", 0);
ini_set("session.cache_limiter", "");

session_start();

if (session_id() == 0) {
	session_destroy();
	session_start();
	session_regenerate_id();
}

$user = "";
if (isset($_POST['user'])) {
	$user = preg_replace("/[^a-z0-9 ]/", '_', $_POST['user']); 
}
$base = "/" . basename(__FILE__);
$base = substr($base, 0,  -4);
$scru = $_SERVER['SCRIPT_URL'];
$args = substr($scru, strpos($scru, $base) + strlen($base) + 1);
$flen = strpos($args, "/");
$func = substr($args, 0, $flen);
// FIXME 
$ru = $_SERVER['REQUEST_URI'];
$rlen = strpos($ru, "?");
$rawt = substr($ru, $rlen + 1);
$target = str_replace(array("..", "/."), "__", urldecode($rawt));
if (str_starts_with($target, '.') && $target !== '.') {
	$target = str_replace(".", "_", $target);
}
if (!isset($_POST['user']) || $_POST['user'] != $user || strlen($user) < 3) {
	if ($func == "echo") {
		head('HTTP/1.1 200 OK');
		header("Content-type: text/plain");
		if (isset($_POST['data'])) {
			echo $_POST['data'];
		}
		exit();
	}
	head('HTTP/1.1 403 Forbidden');
	echo "error [k4712] invalid password";
	exit();
}



if (!isset($_SESSION['user']) || $user != $_SESSION['user'] ||
	!isset($_SESSION['ip']) || $_SESSION['ip'] != getip() ||
	!isset($_SESSION['time']) || $_SESSION['time'] < time() ||
	$func == "login") 
{
	if (!isset($_POST['user']) ||
		!isset($_POST['password']) ||
		!password_verify($_POST['password'], 
			get_password($_POST['user'])))
	{
		if (isset($_SESSION['time']) && $_SESSION['time'] < time()) {
			head('HTTP/1.0 403 Forbidden');
			echo "error [7836] session expired ";
			exit();	
		}
		head('HTTP/1.1 403 Forbidden');
		echo "error [3799] invalid password ";
		exit();
	}
	if (!isset($_SESSION['time']) || $_SESSION['time'] < time()) {
		session_destroy();
		session_start();
	}
	session_regenerate_id();
	$_SESSION['user'] = $_POST['user'];
	$_SESSION['ip'] = getip();
}
$_SESSION['time'] = time() + 60 * 15; // 15 minutes timeout

$data = "";
if (isset($_POST['data'])) {
	$data = $_POST['data'];
}
$seek = intval($_POST['seek']);
$size = intval($_POST['size']);
$home = $data_dir . "/home/" . $user;

///////////////////////////////////////////////////////////////////////////////

switch ($func) {
case "write":
	if (strlen($target) < 1 || !isset($_FILES["file"])) {
		head('HTTP/1.1 409 Conflict');
		echo $_SERVER['REQUEST_URI'];
		echo "error [5277] no target";
		exit();
	}
	$v = $_FILES["file"];
	$dst = $home;
	check_write_permission($dst);
	$dst = $dst . "/" . $target;
	$dr = dirname($dst);
	if (!is_dir($dr)) {
		mkdir($dr, 0777, true);
	}
	$fp = @fopen($dst, "cb");
	if (!$fp) {
		head('HTTP/1.1 409 Conflict');
		echo "error [52787] cannot open";
		exit();
	}
	fseek($fp, 0);
	if ($size >= 0) {
		ftruncate($fp, $size);
	}
	if ($seek >= 0) {
		fseek($fp, $seek);
	} else {
		fseek($fp, 0, SEEK_END);
	}
	$fis = filesize($v['tmp_name']);
	if ($fis > 0) {
		$da = file_get_contents($v['tmp_name']);

		fwrite($fp, $da, $fis);
	}
	fclose($fp);	
	head('HTTP/1.1 200 OK');
	header("Content-type: text/plain");
	echo $target;
        exit();	

case "filesize":	
	$dst = $home;
	check_read_permission($dst);
	$dst = $dst . "/" . $target;
	$se = filesize($dst);
	if ($se == false) {
		head('HTTP/1.1 404 Not Found');
		echo "error [52947] cannot open";
		exit();
	}
	head('HTTP/1.1 200 OK');
	header("Content-type: text/plain");
	echo $se;
	exit(); 

case "read":
	if (strlen($target) < 1) {
		head('HTTP/1.1 409 Conflict');
		echo "error [2177] no target";
		exit();
	}
	$dst = $home;
	check_read_permission($dst);
	$dst = $dst . "/" . $target;
	$fp = @fopen($dst, "rb");
	if (!$fp) {
		head('HTTP/1.1 404 Not Found');
		echo "error [5857] cannot open";
		exit();
	}
	if ($seek > 0) {
		fseek($fp, $seek);
	}
	if ($size < 1) {
		$size = filesize($dst);
	}	
	head('HTTP/1.1 200 OK');
	header("Content-type: text/plain");
	if ($size > 0) {
		print(fread($fp, $size));
	}
	fclose($fp);
	exit();

case "unlink":
	if (strlen($target) < 1) {
		head('HTTP/1.1 409 Conflict');
		echo "error [2177] no target";
		exit();
	}
	$dst = $home;
	check_write_permission($dst);
	$dst = $dst . "/" . $target;
	if (!is_dir($dst) && @unlink($dst)) {
		head('HTTP/1.1 200 OK');
		header("Content-type: text/plain");
		echo $target;
	} else {
		head('HTTP/1.1 409 Conflict');
		echo "error [847292] cannot delete";
	}
        exit();

case "mkdir":
	if (strlen($target) < 1) {
		head('HTTP/1.1 409 Conflict');
		echo "error [21779] no target";
		exit();
	}
	$dst = $home;
	check_write_permission($dst);
	$dst = $dst . "/" . $target;
	if (file_exists($dst)) {
		head('HTTP/1.1 404 Not Found');
		echo "error [217979] cannot create";
		exit();
	}
	if (@mkdir($dst, 0777, true)) {
		head('HTTP/1.1 200 OK');
		header("Content-type: text/plain");
		echo $target;
	} else {
		head('HTTP/1.1 409 Conflict');
		echo "error [281179] cannot create";
	}
        exit();	

case "rmdir":
	if (strlen($target) < 1) {
		head('HTTP/1.1 409 Conflict');
		echo "error [2177] no target";
		exit();
	}
	$dst = $home;
	check_write_permission($dst);
	$dst = $dst . "/" . $target;
	if (@rmdir($dst)) {
		head('HTTP/1.1 200 OK');
		header("Content-type: text/plain");
		echo $target;
	} else {
		head('HTTP/1.1 409 Conflict');
		echo "error [192763] cannot remove";
	}
        exit();	

case "scandir":
	$dst = $home;
	check_read_permission($dst);
	$dst = $dst . "/" . $target;
        $lst = @scandir($dst);
	if (!$lst) {
		head('HTTP/1.1 404 Not Found');
		echo "error [38671] directory not found";
		exit();
	}
        head('HTTP/1.1 200 OK');
        header("Content-type: text/plain");
	foreach ($lst as $f) {
		if ($f[0] == '.') {

		} else if (is_dir($dst . "/" . $f)) {
			if (!($f == "." || $f == "..")) {
				echo $f . "/\n";
			}
		} else {
                	echo $f . "\n";
		}
        }
	exit();
case "adduser":
	$u = substr($target, strpos($target, "/"));
	$u = preg_replace("/[^a-z0-9 ]/", '_', $u); 
	$dst = $data_dir . "/home/" . $u;
	if (isset($data)) {
		$passwd = $data;
	} else {
		$passwd = "";
	}
	if (strlen($passwd) < 5) {
		head('HTTP/1.1 409 Conflict');
		echo "error [x756570] too short";
		exit();
	} 
	if (!file_exists($dst) && !mkdir($dst, 0777, true)) {
		head('HTTP/1.1 409 Conflict');
		echo "error [x7890]";
		exit();
	} 
	$dst = $dst . "/.passwd";
	if (file_exists($dst) || strlen($u) < 3) {
		head('HTTP/1.1 409 Conflict');
		echo "error [x980] user already exists";
		exit();
	} 
	if (!file_put_contents($dst, 
		password_hash($passwd, PASSWORD_DEFAULT))) 
	{
		head('HTTP/1.1 409 Conflict');
		echo "error [x1940]";
		exit();
	}
       	head('HTTP/1.1 200 OK');
       	header("Content-type: text/plain");
	echo $target . " created.";
	exit();

case "passwd":
	$dst = $home;
	if ($user != "guest" && isset($data) && strlen($data) >= 5) {
		$passwd = $data;
	} else {
		head('HTTP/1.1 409 Conflict');
		echo "error [o89985] invalid password";
		exit();
	}
	$dst = $dst . "/.passwd";
	if (!file_put_contents($dst, 
		password_hash($passwd, PASSWORD_DEFAULT))) 
	{
		head('HTTP/1.1 409 Conflict');
		echo "error [o43267] cannot update password";
		exit();
	}
       	head('HTTP/1.1 200 OK');
       	header("Content-type: text/plain");
	echo "password updated.";
	exit();
case "login":
       	head('HTTP/1.1 200 OK');
       	header("Content-type: text/plain");
	echo "logged in.";
	exit();
case "logout":
       	head('HTTP/1.1 200 OK');
       	header("Content-type: text/plain");
	session_destroy();
	echo "logged out.";
	exit();
case "echo":
	head('HTTP/1.1 200 OK');
	header("Content-type: text/plain");
	echo $_POST['data'];
	exit();
default:
	head('HTTP/1.1 404 Not Found');
	echo "error [757] not found";
	exit(-1);
}

exit(0);

///////////////////////////////////////////////
//
function get_password($u)
{
	global $data_dir;
	$f = $data_dir . "/home/" .  preg_replace("/[^a-z0-9 ]/", '_', $u) .  
		"/.passwd";
	if (file_exists($f)) {
		return file_get_contents($f); 
	}
	return "";
}

function check_read_permission($dest)
{
	global $user, $dn, $lang;
	$dr = $dest;

	if (strlen($user) >= 4 && str_ends_with($dr, "/" . $user)) {
		return $dr;
	}

	if (has_permission($dest, $user, "write")) {
		return $dr;
	}
	if (has_permission($dest, $user, "read")) {
		return $dr;
	}
	head('HTTP/1.1 409 Conflict');
	echo "error [37736] permission denied";
	exit();
}

function has_permission($dest, $user, $type)
{
	if (strlen($user) < 4) {
		return false;
	}

	$na = dirname($dest) . "/." . $type;
	if (!file_exists($na)) {
		return false;
	}	
	$f = fopen($na, "r");
	if ($f) {
		while (!feof($f)) {
			$u = fgets($f);
			if (!strcmp($u, $user)) {
				fclose($f);
				return true;
			}
		}
		fclose($f);
	}
	return false;
}

function check_write_permission($dest)
{
	global $user, $dn, $lang;
	$dr = $dest;
	if ($user == "guest") {
		head('HTTP/1.1 409 Conflict');
		echo "error [8399] permission denied";
		exit();
	}
	if (strlen($user) < 4 || !str_ends_with($dr, "/" . $user)) {
		if (!has_permission($dest, $user, "write")) {
			head('HTTP/1.1 409 Conflict');
			echo "error [8345667] permission denied";
			exit();
		}
	}
	return $dr;
}

function head($txt)
{
	header($txt);
	header('Session-Id: ' . session_id());
}

function rplce($s)
{
	$r =  str_replace(
		array("..", "=", "/", "\\", "*", "?", " ", "'", "\"",
			"&", ">", "<", "\n", "\r", "\t", "|", ";"), "_", $s);
	if (str_ends_with($r, ".md") ||
		str_ends_with($r, ".jpg") ||
		str_ends_with($r, ".jpeg") ||
		str_ends_with($r, ".JPG"))
	{
		return $r;
	}
	return str_replace(".", "_", $r);
}

function getip()
{
  //check ip from share internet
  if (!empty($_SERVER['HTTP_CLIENT_IP'])) {
    $ip = $_SERVER['HTTP_CLIENT_IP'];
  }
  //to check ip is pass from proxy
  elseif (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
    $ip = $_SERVER['HTTP_X_FORWARDED_FOR'];
  } else {
    $ip = $_SERVER['REMOTE_ADDR'];
  }

  return $ip;
}

?>
