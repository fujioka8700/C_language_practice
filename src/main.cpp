#include <iostream>

class BasicArray {
 public:
    ~BasicArray() {
        std::cout << "BasicArray::~BasicArray() is called." << std::endl;
    }

    virtual void Set(int index, int value) = 0;
    virtual int Get(int index) const = 0;
};

class DynamicArray : public BasicArray {
 public:
    DynamicArray(int size, int initial_value) {
        data_ = new int[size];
        for (auto i = 0; i < size; ++i) {
            data_[i] = initial_value;
        }
    }

    ~DynamicArray() {
        std::cout << "DynamicArray::~DynamicArray() is called." << std::endl;
        delete[] data_;
    }

    void Set(int index, int value) { data_[index] = value; }

    int Get(int index) const { return data_[index]; }

 private:
    int* data_;
};

int main(int argc, char* argv[]) {
  DynamicArray d(5, 1);

  std::cout << d.Get(2) << std::endl;

  d.Set(2,11);

  std::cout << d.Get(2) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
