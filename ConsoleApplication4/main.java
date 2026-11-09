public class main {
    public static void main(String[] args) {
        String name_ru = "Олеся Ярыгина";
        String name_en = "Olesya Yarygina";
        int num = 29;
        String group = "М3О-103БВ-26";
        String lang = "Java";

        int control = 304 * num;
        String student_id = group + "/" + num;

        System.out.println("Hello to 304 from " + name_en + ", number " + num + ", group " + group + "!");
        System.out.println("Привет, 304! Это " + name_ru + ", номер " + num + ", группа " + group + "!");
        System.out.println("Student ID: " + student_id + " | Language: " + lang + " | Control: " + control);

        
        System.out.println("Upper case name: " + name_en.toUpperCase());
    }
}
