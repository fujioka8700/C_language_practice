#include <iostream>
#include <tuple>

int main(int argc, char* argv[]) {
  std::tuple<std::string, int> person { "Bob", 20 };

  std::cout << std::get<1>(person) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
