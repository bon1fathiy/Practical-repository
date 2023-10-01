package main

import (
  "fmt"
  "math"
)

func main() {
  var n int
  fmt.Scan(&n)
  arr := make([]float64, n)
  var b float64
  for i := 0; i < n; i++ {
    fmt.Scan(&b)
    arr[i] = b
  }
  var l, r int = 0, len(arr) - 1
  var max_l, max_r float64 = arr[l], arr[r]
  var water float64 = 0
  for l < r {
    if max_l >= max_r {
      water += max_r - arr[r]
      r--
      max_r = math.Max(max_r, arr[r])
    } else {
      water += max_l - arr[l]
      l++
      max_l = math.Max(max_l, arr[l])
    }
  }
  fmt.Println(int64(water))
}
