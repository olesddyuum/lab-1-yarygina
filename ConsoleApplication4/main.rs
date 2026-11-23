fn main() {
    let variant = 29;
    let control = 304 * variant;
    let msg = format!("Hello to {} from Olesya Yarygina, number {}, group M3O-103BV-26!", control, variant);
    println!("{}", msg);
    println!("Student ID: M3O-103BV-26/{} | Language: Rust | Control: {}", variant, control);
}
