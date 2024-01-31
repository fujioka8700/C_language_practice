#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> x = {0, 1, 2, 3};
    
    // auto it = x.begin();
    std::vector<int>::iterator it = x.begin();
    
    ++it;

    std::cout << *(it+2) << std::endl;
    
    std::cout << "おわり" << std::endl;

    return 0;
}
