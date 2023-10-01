package main
import (
		"fmt"
		"os"
)

func main() {
	var a, b, c int
	
	fmt.Fscan(os.Stdin, &a, &b, &c)
	fmt.Println(max(a,b,c))
}
