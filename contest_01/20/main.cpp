#include <iostream>
#include <algorithm>

int main() {
    std::string num1;
    std::string num2;

    std::cin >> num1 >> num2;
    std::sort(num1.begin(), num1.end());
    std::sort(num2.begin(), num2.end());

    if (num1 == num2) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
