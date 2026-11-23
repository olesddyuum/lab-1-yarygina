:- encoding(utf8).
main :-
    Num = 29,
    Ctrl is 304 * Num,
    format("Hello to 304 from Olesya Yarygina, number ~w, group M3O-103BV-26!~n", [Num]),
    format("Привет, 304! Это Олеся Ярыгина, номер ~w, группа М3ў-103БВ-26!~n", [Num]),
    format("Student ID: М3ў-103БВ-26/~w | Language: Prolog | Control: ~w~n", [Num, Ctrl]).
