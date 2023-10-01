package main
import (
		"fmt"
		"os"
)

func main() {
	var x, y int
	
	fmt.Fscan(os.Stdin, &x, &y)
	fmt.Println(x*y)
}
