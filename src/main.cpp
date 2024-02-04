#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  std::shared_ptr<int> x = std::make_shared<int>(100);

  {
    std::cout << *x << std::endl;
    std::shared_ptr<int> y = x;

    std::cout << *y << std::endl;
  }

  std::cout << *x << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
