#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "rectangle.hpp"

class Square : public Rectangle {
  public:
    void SetSize(int size);

    void Describe() const override;
};

#endif // SQUARE_HPP