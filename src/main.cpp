#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  std::unique_ptr<int> x(new int(100));
  std::unique_ptr<int> y(std::move(x));

  // std::cout << *x << std::endl;
  std::cout << *y << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
