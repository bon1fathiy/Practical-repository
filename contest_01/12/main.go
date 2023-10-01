package main
import ("fmt" 
        "os" 
)

func main() {
    var X, result int
    fmt.Fscan(os.Stdin, &X)
    
    for X != 1 {
        if X % 2 == 0 {
            X = X / 2
            result += 1
        } else {
            X = 3 * X + 1 
            result += 1
        }
    }
    
    fmt.Println(result)
}
