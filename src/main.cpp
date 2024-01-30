#include <iostream>

// 関数の前方宣言
void HelloWorld(int n);

int main(void) {
    HelloWorld(10);
    
    return 0;
}

void HelloWorld(int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "[" << i << "]" << "Hello World!" << std::endl;
    }
}