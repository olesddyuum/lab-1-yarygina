#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

//принудительно собираем строки в кодировке UTF-8
#pragma execution_character_set("utf-8")

int main() {
    // Включаем кодировку UTF-8 (65001) для вывода в консоль 
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    char name_ru[] = "Олеся Ярыгина";
    char name_en[] = "Olesya Yarygina";
    int num = 29;
    char group[] = "М3О-103БВ-26";
    char lang[] = "C";

    int control = 304 * num;

   
    printf("Hello to 304 from %s, number %d, group %s!\n", name_en, num, group);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n", name_ru, num, group);
    printf("Student ID: %s/%d | Language: %s | Control: %d\n", group, num, lang, control);
    printf("Student number verification: %d\n", num);

    return 0;
}
