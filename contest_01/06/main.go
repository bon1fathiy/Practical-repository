package main
import (
		"fmt"
		"os"
)

func main() {
	five_thousands := 0
	thousand := 0
	five_hundreds := 0
	two_hundreds := 0
	hundred := 0
	
	var sum int
	
	fmt.Fscan(os.Stdin, &sum)
	
	for i := sum; i != 0; {
		if i >= 5000 {
			five_thousands = i / 5000
			i -= five_thousands * 5000
		} else if i >= 1000 {
			thousand = i / 1000
			i -= thousand * 1000
		} else if i >= 500 {
			five_hundreds = i / 500
			i -= five_hundreds * 500
		} else if i >= 200 {
			two_hundreds = i / 200
			i -= two_hundreds * 200
		} else {
			hundred = i / 100
			i -= hundred * 100
		}
	}
	
	fmt.Println(five_thousands, thousand, five_hundreds, two_hundreds, hundred)
}
