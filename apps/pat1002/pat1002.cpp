//
// Created by lilei on 2024/10/17.
//

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

std::vector<std::string> dict = {"ling", "yi",  "er", "san", "si",
                                 "wu",   "liu", "qi", "ba",  "jiu"};

int main() {
  std::string input;
  std::cin >> input;
  long sum = 0;
  for (const char c : input) {
    sum += c - '0';
  }

  std::vector<std::string> pinyins;

  while (sum != 0) {
    int current_num = sum % 10;
    sum /= 10;
    pinyins.push_back(dict[current_num]);
  }

  std::cout << pinyins[pinyins.size() - 1];

  for (int i = pinyins.size() - 2; i >= 0; --i) {
    std::cout << " " << pinyins[i];
  }
  std::cout << std::endl;
}
