#include <iostream>

template <typename T>
class Array {
  public:
    explicit Array(int size)
      : size_(size),
        data_(new T[size_]) {}

    ~Array() {
      delete[] data_;
    }

    int Size() const {
      return size_;
    }

  private:
    const int size_;
    T* data_;
};

template <>
class Array<bool> {
  public:
    explicit Array(int size)
      : size_(size),
        data_size_((size - 1) / 8 + 1),
        data_(new uint8_t[data_size_]) {}

    ~Array() {
      delete[] data_;
    }

    int Size() const {
      return size_;
    }

  public:
    const int size_;
    const int data_size_;
    uint8_t* data_;
};

int main(int argc, char* argv[]) {
  Array<int> ary1(5);
  std::cout << ary1.Size() << std::endl;

  Array<bool> ary2(10); // テンプレート引数を bool にした時のみ完全特殊化される。
  std::cout << ary2.Size() << std::endl;
  std::cout << ary2.data_size_ << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
