
#include <iostream>

int main() {
  int n, max = -1, min = 101, score;
  std::cin >> n;
  std::string max_name, min_name, max_num, min_num, name, num;
  while(n > 0){
    n--;
    std::cin >> name >> num >> score;
    if(score > max){
      max_name = name;
      max_num = num;
      max = score;
    }

    if(score < min){
      min_name = name;
      min_num = num;
      min = score;
    }
  }

  std::cout << max_name << " " << max_num << std::endl;
  std::cout << min_name << " " << min_num << std::endl;


  return 0;
}