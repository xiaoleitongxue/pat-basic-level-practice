
#include <algorithm>
#include <array>
#include <iostream>
#include <unordered_map>

int main() {
    int n = 0;
    std::cin >> n;
    std::unordered_map<int, bool> flags;
    std::array<int, 101> nums;
    std::fill(nums.begin(), nums.end(), 0);
    while (n > 0) {
        n--;
        int num = 0;
        std::cin >> num;
        nums[num] = num;
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
                flags[num] = true;
            } else {
                num = (3 * num + 1) / 2;
                flags[num] = true;
            }
        }
    }
    int count = 0;
    for (int i = 100; i > 0; --i) {
        if (!flags[i] && nums[i]) {
            count++;
        }
    }
    int printed = 0;
    for (int i = 100; i > 0; --i) {
        if (!flags[i] && nums[i]) {
            if(1 == count - printed){
                std::cout << i;
            }else{
                std::cout << i << " ";
            }
            printed++;
        }
    }

    return 0;
}