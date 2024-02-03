#include "aaa.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "好きな食べ物を入力してください：" << std::endl;

  std::string food;

  std::cin >> food;

  std::cout << "好きな食べ物は" << food << "です。" << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
