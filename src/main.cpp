#include <iostream>

namespace A {
    int count = 2;

    int GetCount() {
        return count;
    }

    namespace P {
        int count = 8;

        int GetCount() {
        return count;
    }   
    }
}

namespace B {
    int count = 4;
}

int main(int argc, char* argv[]) {
    std::cout << A::count << std::endl;

    std::cout << A::GetCount() << std::endl;

    std::cout << A::P::GetCount() << std::endl;

    std::cout << B::count << std::endl;

    std::cout << "おわり" << std::endl;

    return 0;
}
