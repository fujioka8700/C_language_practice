#include "aaa.hpp"
#include <iostream>

void HelloWorld() {
  std::cout << "mainのHelloWorld!" << std::endl;
}

int main(int argc, char* argv[]) {
    HelloWorld();

    Something();

    std::cout << "おわり" << std::endl;

    return 0;
}
