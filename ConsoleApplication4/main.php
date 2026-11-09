<?php
$name_ru = "Олеся Ярыгина";
$name_en = "Olesya Yarygina";
$num = 29;
$group = "М3О-103БВ-26";
$lang = "PHP";

$control = 304 * $num;
$student_id = $group . "/" . $num;

echo "Hello to 304 from " . $name_en . ", number " . $num . ", group " . $group . "!\n";
echo "Привет, 304! Это " . $name_ru . ", номер " . $num . ", группа " . $group . "!\n";
echo "Student ID: " . $student_id . " | Language: " . $lang . " | Control: " . $control . "\n";


echo "Name length: " . strlen($name_en) . "\n";
?>
