#include <iostream>
#include <functional>

int Add(int x, int y) {
    return x + y;
}

int main(int argc, char* argv[]) {
    // int (*fp)(int, int) = Add;
    std::function<int(int, int)> f = Add;

    int result = f(3, 5);
    std::cout << result << std::endl;
    
    f = [](int x, int y){ return x * y; };
    std::cout << f(4, 7) << std::endl;

    return 0;
}
