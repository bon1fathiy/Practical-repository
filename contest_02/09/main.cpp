import "strconv"

func isLucky(number string) bool {
    var sum1 int;
    var sum2 int;
    
    for i := 0; i < len(number); i++ {
        digit, _ := strconv.Atoi(string(number[i]))
        if i < 3 {
            sum1 += digit
        } else {
            sum2 += digit
        }
    }
    
    if sum1 == sum2 {
        return true
    } else {
        return false
    }
}
