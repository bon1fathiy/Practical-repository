#include <iostream>
#include <cmath>

int is_prime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
