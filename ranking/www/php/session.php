<?php
//                MMXXIII PUBLIC DOMAIN by O'ksi'D
//
//             The authors disclaim copyright to this software.
//

$my_sid = "oksid-";
$data_path = dirname(__FILE__) . "/../../data/";

function wp_str_ends_with($haystack, $needle)
{
	
	return substr_compare($haystack, $needle, -strlen($needle)) === 0;

}

function wp_uniqid()
{
	date_default_timezone_set('UTC');
	$t = gettimeofday();

	return date("Y/m/d/H/i/s", $t["sec"]) . sprintf("/%05x", $t["usec"]) . bin2hex(random_bytes(3));		
}

function wp_timestr($sec) 
{
	return date("Y/m/d/H/i/s", $sec) . "/00000" . "000000";		

}

function get_user()
{
	$u = "";
	if (isset($_POST["user"]) && strlen($_POST["user"]) > 0) {
		$u = $_POST["user"];

		if (isset($_SESSION['UserData']['user']) && 
				$u != $_SESSION['UserData']['user']) 
		{
                	header("HTTP/1.1 310 Session user dont match");
			exit(-1);
		}
	} else if (isset($_SESSION['UserData']['user'])) {
		$u = $_SESSION['UserData']['user'];
	}
	return str_replace(['+','/','='], ['-','_',''], base64_encode($u)); 
}

function get_user_home($u)
{
	global $data_path;
	if (strlen($u) < 2) {
               	header("HTTP/1.1 311 Username too short");
		exit(-1);
	}
	return $data_path . "users/" . substr($u, 0, 2) .  "/" . substr($u, 2);
}

function my_session_start() {
    session_start();
    if (!empty($_SESSION['deleted_time']) && $_SESSION['deleted_time'] < time() - 180) {
        session_destroy();
        session_start();
    }
}

///////////////////////////////////////////////////////////////////////////////
if (session_status() != PHP_SESSION_ACTIVE) {
	session_set_cookie_params(["SameSite" => "Strict"]); //none, lax, strict
	session_set_cookie_params(["Secure" => "true"]); //false, true
	session_set_cookie_params(["HttpOnly" => "true"]); //false, true

	ini_set('session.use_strict_mode', 1);

	my_session_start();
        if (!isset($_COOKIE["accept"]) &&
		!wp_str_ends_with($_SERVER['REQUEST_URI'], "accept")) 
	{
                session_destroy();
                header("HTTP/1.1 303 Cookies disabled");
                exit(0);
        }
}

if (isset($_POST["func"])) {
	if ($_POST["func"] == "logout") {
		my_invalidate_session();
		header('HTTP/1.1 200 OK');
		echo "Session terminated\n";
                exit(0);
	} else if ($_POST["func"] == "signup") {
		$u = get_user();
		$h = get_user_home($u);
		if (file_exists($h)) {
                	header("HTTP/1.1 407 User exists");
                	exit(0);
		}
		mkdir($h, 0777, true, null);
		if (!file_exists($h)) {
                	header("HTTP/1.1 307 Cannot create home dir");
                	exit(0);
		}
		file_put_contents($h . "/.htpasswd", 
			json_encode(array('user' => $_POST['user'], 
				'pass' => password_hash(
					$_POST["pass"], PASSWORD_DEFAULT),
				'time' => time(),
				'email' => $_POST['target'])));
			
               	header("HTTP/1.1 200 OK");
                exit(0);
	}
}

///////////////////////////////////////////////////////////////////////////////

function my_session_regenerate_id() {
    global $my_sid;
    if (isset($_SESSION['UserData'])) {
    	$ud = $_SESSION['UserData'];
    } else {
    	$ud = array("dummy" => "");
    }
    if (session_status() != PHP_SESSION_ACTIVE) {
        session_start();
    }
    $newid = session_create_id($my_sid);
    $_SESSION['deleted_time'] = time();
    session_commit();
    ini_set('session.use_strict_mode', 0);
    session_id($newid);
    session_start();
    $_SESSION['UserData'] = $ud;
}

function get_fip()
{
	if (!empty($_SERVER['HTTP_CLIENT_IP'])) {
    		return $_SERVER['HTTP_CLIENT_IP'];
	} elseif (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
    		return $_SERVER['HTTP_X_FORWARDED_FOR'];
	}
    	return $_SERVER['REMOTE_ADDR'];
}

function my_invalidate_session()
{
    	$_SESSION['deleted_time'] = time();
	unset($_SESSION['UserData']['user']);
	unset($_SESSION['UserData']['pass']);
	session_gc();
}

function invalid_logon($l)
{
	my_invalidate_session();
	if ($l) {
		if (isset($_POST["user"]) && strlen($_POST["user"]) > 1) {
        		header("HTTP/1.1 305 Invalid user or password");
		} else if (isset($_GET["target"]) && isset($_GET["folder"])) {
			setcookie("target", $_GET["target"]);
			setcookie("folder", $_GET["folder"]);
        		header("HTTP/1.1 306 No username provided");
		} else {
        		header("HTTP/1.1 308 No active session");
		}
		exit();
	}
        header("HTTP/1.1 304 Invalid logon");
	exit(0);
}

	
if (!empty($_SESSION['UserData']['time']) && 
	$_SESSION['UserData']['time'] < time() - (15 * 60)) 
{
	my_session_regenerate_id();
}


if (isset($_SESSION['UserData']['user']) && 
	isset($_SESSION['UserData']['pass']) &&
	!(isset($_POST["user"]) && strlen($_POST["user"]) > 0))
{
	if (!($_SESSION['UserData']['IP'] == $_SERVER['REMOTE_ADDR'] &&
		$_SESSION['UserData']['FIP'] == get_fip() )) 
	{
		my_invalidate_session();
		header('HTTP/1.1 403 Forbidden IP address');
		header("Content-type: text/plain");
		exit();
	}
} else {
	if (isset($_POST["user"])) {
		$u = get_user();
		if (strlen($u) > 2) {
			$f =  get_user_home($u) . "/.htpasswd";
			if (file_exists($f)) {
				$logins = json_decode(file_get_contents($f), true);
			}
		}
	}
	if (isset($_POST["user"]) &&
		isset($_POST["pass"]) &&
		isset($logins["time"]) &&
		isset($logins["pass"]) &&
		isset($logins["user"]))
	{
			echo "JML BBBBBio";
		if (password_verify($_POST["pass"], $logins["pass"])) {
			session_destroy();
			my_session_regenerate_id();
			$_SESSION['UserData']['user'] = $_POST["user"];
			$_SESSION['UserData']['pass'] = "password is set";
			$_SESSION['UserData']['IP'] = $_SERVER['REMOTE_ADDR'];
			$_SESSION['UserData']['FIP'] = get_fip();
			$_SESSION['UserData']['time'] = time();
			$_SESSION['UserData']['since'] = $logins["time"];
		} else {
			echo "JML BBBBB";
			invalid_logon(true);
		}
	} else {
		if (isset($_POST["user"]) && isset($_POST["pass"])) {
			invalid_logon(true);
		} else if (wp_str_ends_with($_SERVER['REQUEST_URI'], "accept")) {
			setcookie("cookies", "accept", array(
				"expires" => time() + 60*60*24*365*2,
				"path" => "/",
				"secure" => true,
				"httponly" => true,
				"samesite" => "Strict"));
			session_destroy();
			my_session_regenerate_id();
		} else if (isset($_SESSION['UserData'])) {
			invalid_logon(true);
		} else {
			invalid_logon(false);
		}
	}
}


?>
