<?php
$data = $_GET['data'];
$file = "data.txt"; 
$fp = fopen($file, "w") or die("Couldn't open $file for writing!"); 
fwrite($fp, $data.PHP_EOL) or die("Couldn't write values to file!");
fclose($fp);
echo "File succesfully updated!</br>";
echo "Next tweet check in 2 Seconds! :)";
header("refresh:2;url=index.html" );
?>
