#include <iostream>

template <typename T, typename U>
auto Sum(T a, U b) {
  return static_cast<U>(a) + b;
};

int main(int argc, char* argv[]) {
  auto result = Sum<int, double>(1, 2.5);

  std::cout << result << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
