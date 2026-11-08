using System;

class Program
{
    static void Main()
    {
        string name_ru = "Олеся Ярыгина";
        string name_en = "Olesya Yarygina";
        int num = 29;
        string group = "М3О-103БВ-26";
        string lang = "C#";

        int control = 304 * num;
        string student_id = group + "/" + num;

        Console.WriteLine("Hello to 304 from " + name_en + ", number " + num + ", group " + group + "!");
        Console.WriteLine("Привет, 304! Это " + name_ru + ", номер " + num + ", группа " + group + "!");
        Console.WriteLine("Student ID: " + student_id + " | Language: " + lang + " | Control: " + control);

       
        Console.WriteLine("Upper case name: " + name_en.ToUpper());
    }
}
