#include <iostream>

union Common {
  int width;
  float height;
} c;

int w;
float h;

int main(int argc, char* argv[]) {
  c.height = 10.0;
  c.width = 5;

  w = c.width;
  h = c.height;

  std::cout << w << std::endl;
  std::cout << h << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
