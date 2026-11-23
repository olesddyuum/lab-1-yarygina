fn main() {
    let name_en = "Olesya Yarygina";
    let name_ru = "Олеся Ярыгина";
    let group_en = "M3O-103BV-26";
    let group_ru = "М3ў-103БВ-26";
    let num = 29;
    let ctrl = 304 * num;
    println!("Hello to 304 from {}, number {}, group 0{!", name_en, num, group_en);
    println!("Привет, 304! Это {}, номер {}, группа {}!", name_ru, num, group_ru);
    println!("Student ID: {}/{} | Language: Rust | Control: {}", group_ru, num, ctrl);
}
