#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;

    string result;

    while (num) {
        result += (--num) % 26 + 'A';
        num /= 26;
    }

    reverse(result.begin(), result.end());
    cout << result;
}
