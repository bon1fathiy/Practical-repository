package main
import (
		"fmt"
		"os"
)

func main() {
	var answers [3]string

	fmt.Fscan(os.Stdin, &answers[0], &answers[1], &answers[2])
	
	if answers[0] == "Нет" {
		if answers[1] == "Нет"{
			if answers[2] == "Нет"{
				fmt.Println("Кот")
			}else{
				fmt.Println("Жираф")
			}
		}else{
			if answers[2] == "Нет"{
				fmt.Println("Курица")
			}else{
				fmt.Println("Страус")
			}
		}
	}else{
		if answers[1] == "Нет"{
			if answers[2]== "Нет"{
				fmt.Println("Дельфин")
			}else{
				fmt.Println("Плезиозавры")
			}
		}else{
			if answers[2] == "Нет"{
				fmt.Println("Пингвин")
			}else{
				fmt.Println("Утка")
			}
		}
	}
}
