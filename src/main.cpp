#include <iostream>

struct Rectangle {
  int height;
  int width;
};

int main(int argc, char* argv[]) {
  Rectangle r;
  r.height = 10;
  r.width  = 20;

  std::cout << r.height << std::endl;
  std::cout << r.width << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
