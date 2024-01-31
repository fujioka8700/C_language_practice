#include <iostream>

int main(int argc, char* argv[]) {
    int x[] = {2, 4, 6, 8, 10};

    int* p = x;

    std::cout << *p     << std::endl;
    std::cout << *(p+2) << std::endl;
    std::cout << *(p+4) << std::endl;

    return 0;
}
