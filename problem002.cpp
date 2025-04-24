#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 5, 8, 20, 15};

    int max_number {numbers.at(0)};

    for (auto number: numbers) {
        if (number > max_number) {
            max_number = number;
        }
    }

    std::cout << max_number << std::endl;
    return 0;
}