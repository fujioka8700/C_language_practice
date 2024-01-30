#include <iostream>

int Add(int x, int y) {
    return x + y;
}

int main(int argc, char* argv[]) {
    int (*fp)(int, int) = Add;
    int result = fp(3, 5);

    std::cout << result << std::endl;
    
    return 0;
}
