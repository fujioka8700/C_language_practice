#include "square.hpp"
#include <iostream>

void Square::SetSize(int size) {
    height_ = size;
    width_ = size;
}

void Square::Describe() const {
    std::cout << "size = " << height_ << std::endl;
}