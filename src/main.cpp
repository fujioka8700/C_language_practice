#include "aaa.hpp"
#include <iostream>
#include <string>
#include <ctype.h>

int main(int argc, char* argv[]) {
  std::string str;

  std::cout << "整数を入力してください: ";

  std::cin >> str;

  for (int i = 0; i < (int)str.length(); i++)
  {
    bool isNumber = false;

    isNumber = isdigit(str[i]);

    if (!(i == (int)str.length() - 1))
    {
      continue;
    }

    if (isNumber) {
      std::cout << "入力した整数は " << str << " です。" << std::endl;
    } else {
      std::cout << "不正な入力です。" << std::endl;
    }

    if (!isNumber)
    {
      break;
    }
    
  }

  std::cout << "おわり" << std::endl;

  return 0;
}
