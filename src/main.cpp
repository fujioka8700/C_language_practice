#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  int* p1 = new int(100);
  std::shared_ptr<int> p2;

  std::cout << *p1 << std::endl;

  {
    std::shared_ptr<int> x = std::make_shared<int>(200);
    
    p2 = x;
  }

  std::cout << *p2 << std::endl;

  std::cout << "おわり" << std::endl;

  delete[] p1;

  return 0;
}
