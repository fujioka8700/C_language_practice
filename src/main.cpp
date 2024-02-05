#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  std::shared_ptr<int> x = std::make_shared<int>(100);

  {
    std::shared_ptr<int> y = x;

    std::cout << *y << std::endl;

    *y = 200;
  } // y が破棄される

  std::cout << *x << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
} // x の所有者が0人になり、x のデストラクタで delete される。
