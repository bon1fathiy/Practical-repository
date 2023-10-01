#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>

int main() {
    std::set<std::string> resSet;
    std::vector<std::string> startVector;
    std::unordered_map<std::string, int> wordCount;
    std::string word;

    while (word != "end") {
        std::cin >> word;
        startVector.push_back(word);
    }

    for (const std::string& words : startVector) {
        wordCount[words]++;
    }

    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
            resSet.insert(pair.first);
        }
    }

    for (auto i : resSet) {
        std::cout << i << " ";
    }
}
