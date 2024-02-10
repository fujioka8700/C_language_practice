#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string s = "Hello";

  for(int i: s) {
    std::cout << static_cast<char>(i);
  }

  std::cout << "おわり" << std::endl;

  return 0;
}
