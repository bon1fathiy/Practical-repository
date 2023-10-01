package main

import (
  "fmt"
  "math"
)

func main() {
  var chelovek float64 = 0.5
  chelovek = 365 * chelovek
  var dub float64 = 20
  var topol float64 = 32
  dub1 := math.Ceil(chelovek / dub)
  topol1 := math.Ceil(chelovek / topol)
  fmt.Println(chelovek, topol1, dub1)
}
