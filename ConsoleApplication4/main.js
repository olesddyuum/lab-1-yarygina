const name_ru = "Олеся Ярыгина";
const name_en = "Olesya Yarygina";
const num = 29;
const group = "М3О-103БВ-26";
const lang = "JavaScript";

const control = 304 * num;
const student_id = group + "/" + num;

console.log("Hello to 304 from " + name_en + ", number " + num + ", group " + group + "!");
console.log("Привет, 304! Это " + name_ru + ", номер " + num + ", группа " + group + "!");
console.log("Student ID: " + student_id + " | Language: " + lang + " | Control: " + control);

const words = name_en.split(" ");
console.log("Word count in English name: " + words.length);
