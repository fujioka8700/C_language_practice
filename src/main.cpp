#include <iostream>

template <typename T, int N>
class Array {
  public:
    int size() const {
      return N;
    }
    
  private:
    T data_[N];
};

int main(int argc, char* argv[]) {
  Array<int, 5> ary;
  std::cout << ary.size() << std::endl; 

  std::cout << "おわり" << std::endl;

  return 0;
}
