#include <iostream>
#include <memory>

class Parent {
  public:
    virtual ~Parent() {
      std::cout << "Parent::~Parent() is called." << std::endl;
    }
};

class Child : public Parent {
  public:
    ~Child() override {
      std::cout << "Child::~Child() is called." << std::endl;
    }
};

int main(int argc, char* argv[]) {
  std::unique_ptr<Parent> p(new Child());

  std::cout << "おわり" << std::endl;

  return 0;
}
