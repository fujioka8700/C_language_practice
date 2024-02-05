#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  std::shared_ptr<int> sp = std::make_shared<int>(246);
  std::weak_ptr<int> wp = sp;
  std::shared_ptr<int> sp2 = wp.lock();

  std::cout << *sp << std::endl;
  std::cout << *sp2 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
