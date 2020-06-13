#[derive(Debug)]
struct You06 {
    i: i64,
    j: i64,
    k: i64,
    l: i64,
    m: i64,
}

fn pp(i: i64) -> Option<You06> {
    if i%2 == 0 {
        Some(You06{i: i, j: i, k: i, l: i, m: i})
    } else {
        None
    }
}

fn main() {
    let mut sum: i64 = 0;
    let mut i: i64 = 1;
    while i < 20000000000 {
        i += 3;
        let p = pp(i);
        if let Some(ii) = p {
            sum += ii.i;
        }
    }
    println!("{}", sum);
}
