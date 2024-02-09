#include <iostream>

template <int N, typename T>
void Sum() {
  for (int i = 0; i < N; i++)
  {
    std::cout << i;
  }
};

int main(int argc, char* argv[]) {
  Sum<10, int>();

  std::cout << "おわり" << std::endl;

  return 0;
}
