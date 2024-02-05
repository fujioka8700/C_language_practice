#include <iostream>
#include <string>

// 左辺値参照
void Print(std::string& str) {
  std::cout << str << std::endl;
}

// 右辺値参照
void Print2(std::string&& str) {
  std::cout << str << std::endl;
}

int main(int argc, char* argv[]) {
  std::string str = "hoge";

  Print(str);
  Print2(std::move(str));

  std::cout << "おわり" << std::endl;

  return 0;
}
