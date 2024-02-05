#include "rectangle.hpp"
#include <iostream>

void Rectangle::Describe() const {
    std::cout << "height = " << height_ << std::endl;
    std::cout << "width = " << width_ << std::endl;
}

int Rectangle::Area() const {
    return this->height_ * this->width_;
}