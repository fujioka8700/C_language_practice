#include <iostream>

auto func = [](int a, int b) -> int { return a + b; };

int main(int argc, char* argv[]) {
    int result = func(4, 6);

    std::cout << result << std::endl;
    
    return 0;
}
