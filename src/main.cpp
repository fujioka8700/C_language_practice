#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
  std::ifstream file("../files/file.txt");
  std::string line;

  while (std::getline(file, line)) {
    std::cout << line << std::endl;
  }

  std::cout << "おわり" << std::endl;

  return 0;
}
