#include <iostream>
#include "aaa.hpp"

#ifndef HOGE
#define HOGE
int hoge = 5;
#endif
#ifndef HOGE
#define HOGE
int hoge = 5;
#endif

int main(int argc, char* argv[]) {
    // std::cout << ::x << std::endl;
    DoSometing();

    std::cout << hoge << std::endl;

    std::cout << "おわり" << std::endl;

    return 0;
}
