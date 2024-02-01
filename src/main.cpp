#include <iostream>

int main(int argc, char* argv[]) {
    int x = 5;

    std::cout << x << std::endl;

    {
        int x = 10;

        std::cout << x << std::endl;
    }

    std::cout << x << std::endl;

    std::cout << "おわり" << std::endl;

    return 0;
}
