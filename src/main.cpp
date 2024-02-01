#include <iostream>

namespace A {
    int count = 2;
}

namespace B {
    int count = 4;
}

int main(int argc, char* argv[]) {
    std::cout << A::count << std::endl;
    std::cout << B::count << std::endl;

    std::cout << "おわり" << std::endl;

    return 0;
}
