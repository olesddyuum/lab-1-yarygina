# Лабораторная работа №1 — Ярыгина Олеся

## Информация о студенте
* ФИО: Олеся Ярыгина
* Группа: М3О-103БВ-26
* Вариант: 29
* Контрольное число: 8816

## Описание работы
В рамках лабораторной работы реализованы программы вывода приветствия на 13 языках программирования с использованием их синтаксических особенностей.

По заданию для 29 варианта (`29 mod 5 = 4`) код на языке Assembler разработан в отдельной ветке `feature/asm` и объединён с основной веткой `main`.

## Список файлов и команды запуска (из папки `ConsoleApplication4`)

1. **C++ (`ConsoleApplication4.cpp`)**
   Компиляция и запуск: `cl ConsoleApplication4.cpp /Fe:app_cpp.exe; ./app_cpp.exe`

2. **C (`main.c`)**
   Компиляция и запуск: `cl main.c /Fe:app_c.exe; ./app_c.exe`

3. **Python (`main.py`)**
   Запуск: `python main.py`

4. **JavaScript (`main.js`)**
   Запуск: `node main.js`

5. **TypeScript (`main.ts`)**
   Запуск: node main.ts


6. **C# (`main.cs`)**
   Запуск: csc main.cs; ./main.exe


7. **Java (`main.java`)**
   Запуск: `java main.java`

8. **Go (`main.go`)**
   Запуск: & "C:\Program Files\Go\bin\go.exe" run main.go


9. **Prolog (`main.pl`)**
   Запуск:& "C:\Program Files\swipl\bin\swipl.exe" -q -s main.pl -g main -t halt


10. **Assembler (`main.s`)**
    Компиляция и запуск: `$env:Path = "C:\msys64\ucrt64\bin;" + $env:Path; gcc main.s -o app_asm.exe; ./app_asm.exe`

11. **Bash (`main.sh`)**
    Запуск: `C:\msys64\usr\bin\bash.exe main.sh`

12. **F# (`main.fs`)**
    Запуск: `echo "#quit;;" | dotnet fsi main.fs`

13. **Rust (`main.rs`)**
    Компиляция и запуск: `& "$env:USERPROFILE\.cargo\bin\rustc.exe" main.rs -o app_rs.exe; ./app_rs.exe`
