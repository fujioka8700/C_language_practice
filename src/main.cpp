#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  const std::string str("hoge");
  std::string& x = const_cast<std::string&>(str);

  // str.replace(str.begin(), str.end(), "fuga");
  std::cout << str << std::endl;

  x.replace(x.begin(), x.end(), "fuga");
  std::cout << x << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
