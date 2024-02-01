#include "aaa.hpp"
#include <stdio.h>
#include <iostream>

namespace {
  int x = 50;
}

namespace A {
  int x = 100;
}

void DoSomething() {
  printf("DoSomethingを実行した。\n");
}

void Print() {
  printf("Printを実行した。\n");

  printf("%d\n", x);
  printf("%d\n", A::x);

  printf("Printを終了した。\n");
}

inline void HelloWorld() {
  std::cout << "aaaのHelloWorld!" << std::endl;
}

void Something() {
  HelloWorld();
}