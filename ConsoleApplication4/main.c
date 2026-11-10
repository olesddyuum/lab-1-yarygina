#include <stdio.h>

int main() {
    const char* student_name_en = "Olesya Yarygina";
    int student_number = 29;
    const char* group_name = "M3O-103BV-26";
    const char* language_name = "C";
    int control_value = 304 * student_number; // 8816

   
    printf("Hello to %d from %s, number %d, group %s!\n", control_value, student_name_en, student_number, group_name);
    printf("Student ID: %s/%02d | Language: %s | Control: %d\n", group_name, student_number, language_name, control_value);
    printf("Student number verification: %d\n", student_number);

    return 0;
}
