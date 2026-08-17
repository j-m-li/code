<?php


function get_folders_file()
{
        $u = get_user();
	$u = get_user_home($u);

        return $u . "/.folders";
}

function mkfolder($dst, $folder, $usr) {
        $f = get_folders_file();
        file_put_contents($f, $folder . "\n", FILE_APPEND | LOCK_EX);

}


function publish($dst, $folder, $target, $usr)
{
        $data = "";

        $f = fopen(get_folders_file(), "r");
        if ($f) {
		header('HTTP/1.1 200 OK');
		header("Content-type: text/plain");
                echo $folder . "/" . $target;
            	while (!feof($f)) {
                        $fol = trim(fgets($f));
                        if (strlen($fol) >= 2) {
				echo $fol . "\n";
                        }
                }
                fclose($f);
	}
	exit(0);
}

?>
