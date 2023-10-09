#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int a;
    std::vector<int> mainArr;
    int b;
    std::vector<int> arr;

    std::cin >> a;
    for (int i = 0; i < a; i++) {
        int num;
        std::cin >> num;
        mainArr.push_back(num);
    }

    std::cin >> b;
    for (int i = 0; i < b; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    mainArr.insert(mainArr.end(), arr.begin(), arr.end());
    sort(mainArr.begin(), mainArr.end());

    for (int i = 0; i <= mainArr.size() - 1; i++) {
        std::cout << mainArr[i] << " ";
    }
}
