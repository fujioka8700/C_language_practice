#include <iostream>

void PringArray1(const int x[5]) {
    for (int i = 0; i < 5; i++)
    {
        std::cout << x[i] << std::endl;
    }
    
    std::cout << "PringArray1 end" << std::endl;
}

void PringArray2(const int* p) {
    for (int i = 0; i < 5; i++)
    {
        std::cout << *(p+i) << std::endl;
    }
    
    std::cout << "PringArray2 end" << std::endl;
}

int main(int argc, char* argv[]) {
    int x[] = {2, 4, 6, 8, 10};

    PringArray1(x);
    PringArray2(x);

    std::cout << "おわり" << std::endl;

    return 0;
}
