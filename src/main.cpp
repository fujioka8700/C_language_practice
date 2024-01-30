#include <iostream>

int main(int argc, char* argv[]) {
    int init = 5;

    int (*fp)(int, int) = [](int a, int b) -> int { return a * b; };
    auto g = [&init](int a, int b) -> int { return init + a * b; };

    init = 0;

    int result_copy = fp(4, 6);
    std::cout << result_copy << std::endl;

    int result_ref = g(4, 6);
    std::cout << result_ref << std::endl;
    
    return 0;
}
