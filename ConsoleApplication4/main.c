#include <stdio.h>

int main() {
    const char* name_en = "Olesya Yarygina";
    const char* name_ru = "Олеся Ярыгина";
    const char* group_en = "M3O-103BV-26";
    const char* group_ru = "МЗО-103БВ-26";
    int num = 29;
    int ctrl = 304 * num;
    printf("Hello to 304 from %s, number %d, group %s!\n", name_en, num, group_en);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n", name_ru, num, group_ru);
    printf("Student ID: %s/%d | Language: C | Control: %d\n", group_ru, num, ctrl);
    return 0;
}
