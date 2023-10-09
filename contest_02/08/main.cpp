import "strings"

func isPalindrome(str string) bool {
    var strn string = "~!@#%^&*() "
    var main_str string = strings.ToLower(str)
    var res string = ""
    for i:=0;i<len(main_str);i++{
        if !(strings.Contains(strn, string(main_str[i]))){
            res += string(main_str[i])
        }
    }
    var rev string = ""
    for i:=len(res)-1;i>=0;i--{
        rev += string(res[i])
    }
    if rev == res{
        return true
    }
    return false
}
