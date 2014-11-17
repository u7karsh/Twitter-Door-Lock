<?php
$data = $_GET['data'];
$file = "data.txt"; 
$fp = fopen($file, "w") or die("Couldn't open $file for writing!"); 
$tok = strtok($data,'^');
while(strcmp($tok,$data)!=0){
if(strcmp($tok,"")!=0){
fwrite($fp, $tok.PHP_EOL) or die("Couldn't write values to file!");
}
$data = $tok;
$tok = strtok('^');
}
fclose($fp);
echo "File succesfully updated!</br>";
echo "Next tweet check in 2mins :)";
header("refresh:120;url=index.html" );
?>
