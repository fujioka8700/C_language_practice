#include <iostream>
#include <string>
#include <tuple>

int main(int argc, char* argv[]) {
    // std::tuple<std::string, int, std::string>person = { "Bob", 20, "USA" };

    std::pair<std::string, int> person { "Bob", 20 };

    std::cout << std::get<1>(person) << std::endl;
    std::cout << person.first << std::endl;
    
    std::cout << "おわり" << std::endl;

    return 0;
}
