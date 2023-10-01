package main

import "fmt"

func main() {
	var arrLen int
	fmt.Scan(&arrLen)
	arr := make([]float64, arrLen)

	for i := 0; i < arrLen; i++ {
		var b float64
		fmt.Scan(&b)
		arr[i] = b
	}

	resArr := make([]float64, arrLen)
	resArr[0] = arr[0]

	for i := 1; i < arrLen; i++ {
		var lastElem float64
		var nextElem float64
		var currentElem float64
		lastElem = arr[i-1]
		
		if i < arrLen - 1 {
		    nextElem = arr[i+1]
		}
		
		currentElem = arr[i]
		
		if i < arrLen-1 {
			resArr[i] = (lastElem + currentElem + nextElem) / 3.0
		} else {
			resArr[len(arr)-1] = arr[len(arr)-1]
		}
	}
	
	fmt.Print(arr[0], " ")
	
	for i := 1; i < arrLen; i++ {
	    fmt.Print(resArr[i], " ")
	}
}
