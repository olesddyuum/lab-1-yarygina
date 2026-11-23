student('Olesya Yarygina', 29, 'M3O-103BV-26').
main :-
    student(Name, Num, Group),
    Control is 304 * Num,
    format('Hello to ~w from ~w, number ~w, group ~w!~n', [Control, Name, Num, Group]),
    format('Student ID: ~w~n ', [Group]),
    format('/~w | Language: Prolog | Control: ~w~n', [Num, Control]).
