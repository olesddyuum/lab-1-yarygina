package main

import "fmt"

func main() {

	var name_ru string = "Олеся Ярыгина"
	var name_en string = "Olesya Yarygina"
	var num int = 29
	var group string = "М3О-103БВ-26"
	var lang string = "Go"

	
	var control int = 304 * num
	var student_id string = group + "/29"

	fmt.Println("Hello to 304 from", name_en, ", number", num, ", group", group, "!")
	fmt.Println("Привет, 304! Это", name_ru, ", номер", num, ", группа", group, "!")
	fmt.Println("Student ID:", student_id, "| Language:", lang, "| Control:", control)

	
	fmt.Println("Name length:", len(name_en))
}


