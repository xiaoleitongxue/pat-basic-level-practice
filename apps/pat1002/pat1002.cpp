//
// Created by lilei on 2024/10/17.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        count++;
    }
    std::cout << count;
}
