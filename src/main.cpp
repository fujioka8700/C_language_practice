#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v = {1, 2, 3};
  std::vector<int>::iterator itr = v.begin();

  std::cout << itr[0] << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
