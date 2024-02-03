#include "aaa.hpp"
#include <iostream>
#include <vector>
#include <string>

void Print(std::string&) {
  std::cout << "左辺値参照" << std::endl;
}

void Print(std::string&&) {
  std::cout << "右辺値参照" << std::endl;
}

int main(int argc, char* argv[]) {
  std::string str = "hoge";

  Print(str);
  Print(std::move(str));

  std::cout << "おわり" << std::endl;

  return 0;
}
