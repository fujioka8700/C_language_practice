#include <iostream>

class DynamicArray {
  public:
    DynamicArray(int size, int initial_value) {
      data_ = new int[size];
      size_ = size;

      for (int i = 0; i < size; i++) {
        data_[i] = initial_value;
      }
    }

    void Set(int index, int value) {
      data_[index] = value;
    }

    int Get(int index) const {
      return data_[index];
    }

    ~DynamicArray() {
      std::cout << "DynamicArray::~DynamicArray() is called." << std::endl;
      delete[] data_;

      for (int i = 0; i < size_; i++) {
        std::cout << data_[i] << std::endl;
      }
    }

  private:
    int* data_;
    int size_;
};

int main(int argc, char* argv[]) {
  DynamicArray d(5, 1);

  d.Set(2,11);

  std::cout << d.Get(2) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
