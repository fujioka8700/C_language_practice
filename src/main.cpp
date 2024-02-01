#include <iostream>
#include "aaa.hpp"

int main(int argc, char* argv[]) {
    // std::cout << ::x << std::endl;
    DoSometing();

    extern int x;

    std::cout << x << std::endl;

    std::cout << "おわり" << std::endl;

    return 0;
}
