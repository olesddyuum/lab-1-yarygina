
student_data("Олеся Ярыгина", "Olesya Yarygina", 29, "М3О-103БВ-26").


main :-
    student_data(NameRu, NameEn, Number, Group),
    Control is 304 * Number,
    format('Hello to ~w from ~s, number ~w, group ~s!~n', [Control, NameEn, Number, Group]),
    format('Привет, ~w! Это ~s, номер ~w, группа ~s!~n', [Control, NameRu, Number, Group]),
    //форматируем ID: если номер меньше 10, добавляем ведущий ноль
    (Number < 10 -> format(string(ID), '~s/0~w', [Group, Number]); format(string(ID), '~s/~w', [Group, Number])),
    format('Student ID: ~s | Language: Prolog | Control: ~w~n', [ID, Control]).
