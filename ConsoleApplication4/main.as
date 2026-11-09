package {
    import flash.display.Sprite;
    
    public class main extends Sprite {
        public function main() {
            var name_ru:String = "Олеся Ярыгина";
            var name_en:String = "Olesya Yarygina";
            var num:int = 29;
            var group:String = "М3О-103БВ-26";
            var lang:String = "ActionScript";

            var control:int = 304 * num;
            var student_id:String = group + "/" + num;

            trace("Hello to 304 from " + name_en + ", number " + num + ", group " + group + "!");
            trace("Привет, 304! Это " + name_ru + ", номер " + num + ", группа " + group + "!");
            trace("Student ID: " + student_id + " | Language: " + lang + " | Control: " + control);

            
            trace("Upper case name: " + name_en.toUpperCase());
        }
    }
}
