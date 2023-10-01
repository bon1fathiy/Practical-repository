#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int maxTreeWide = 2;
    int maxNumsInLine = 1;
    int currentNumsInLine = 0;
    bool isGoingUp = true;

    for (int i = 1; i <= num; i++) {
        std::cout << i << " ";
        currentNumsInLine++;

        if (currentNumsInLine == maxNumsInLine) {
            std::cout << "\n";
            currentNumsInLine = 0;

            maxNumsInLine += isGoingUp ? 1 : -1;

            if (maxNumsInLine == maxTreeWide) {
                isGoingUp = !isGoingUp;
            }
            else if (maxNumsInLine == 1) {
                isGoingUp = !isGoingUp;
                maxTreeWide++;
            }
        }
    }

    return 0;
}
