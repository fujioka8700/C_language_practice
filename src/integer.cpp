#include "integer.hpp"

int Integer::Value() const {
  return value_;
}

Integer Integer::operator+(const Integer& rhs) const {
  Integer tmp(Value() + rhs.Value());
  return tmp;
}