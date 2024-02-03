#include "aaa.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::ofstream file("../files/fruits.txt");
  std::vector<std::string> fruits = { "apple", "strawberry", "pear", "grape" };

  for (const auto &fruit: fruits)
  {
    file << fruit << std::endl;
  }
  
  std::cout << "おわり" << std::endl;

  return 0;
}
