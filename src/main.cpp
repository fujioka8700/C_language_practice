#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> x = {0, 1, 2, 3};
    
    x[2] = 100;

    std::cout << x[0] << std::endl;
    std::cout << x.size() << std::endl;
    
    std::cout << "おわり" << std::endl;

    return 0;
}
