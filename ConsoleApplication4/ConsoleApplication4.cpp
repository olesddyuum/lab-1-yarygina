#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "RU");

    std::string student_name_ru = "Олеся Ярыгина";
    std::string student_name_en = "Olesya Yarygina";
    int student_number = 29;
    std::string group_name = "М3О-103БВ-26";
    std::string language_name = "C++";

    
    int control_value = 304 * student_number;
    std::string student_id = group_name + "/" + std::to_string(student_number);

    std::cout << "Hello to 304 from " << student_name_en << ", number " << student_number << ", group " << group_name << "!\n";
    std::cout << "Привет, 304! Это " << student_name_ru << ", номер " << student_number << ", группа " << group_name << "!\n";
    std::cout << "Student ID: " << student_id << " | Language: " << language_name << " | Control: " << control_value << "\n";

   
    std::cout << "Name length: " << student_name_en.length() << "\n";

    return 0;
}
