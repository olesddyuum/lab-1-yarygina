module Main
let name = "Olesya Yarygina"
let variant = 29
let control = 304 * variant
printfn "Hello to %d from %s, number %d, group M3O-103BV-26!" control name variant
name |> String.length |> printfn "Name length: %d"
