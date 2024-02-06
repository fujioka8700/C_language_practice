#include <iostream>

void Set(int size, int* p) {
  for (int i = 0; i < size; i++)
  {
    *(p + i) = i * 10;
  }
}

void Show(int size, int* p) {
  for (int i = 0; i < size; i++)
  {
    std::cout << *(p + i) << " ";
  }
  printf("\n");
}