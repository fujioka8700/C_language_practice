#include "brightness.hpp"

int Brightness::Value() const {
  return value_;
}
Brightness Brightness::Maximum() {
  return Brightness(100);
}
Brightness Brightness::Minimum() {
  return Brightness(0);
}
Brightness Brightness::Median() {
  return Brightness((Maximum().value_ + Minimum().value_) / 2);
}