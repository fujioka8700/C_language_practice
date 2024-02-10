#include "realnumber.hpp"
#include "integer.hpp"

RealNumber operator+(const Integer& lhs, const RealNumber& rhs) {
  RealNumber tmp(lhs.Value() + rhs.Value());
  return tmp;
}

RealNumber operator+(const RealNumber& lhs, const Integer& rhs) {
  RealNumber tmp(lhs.Value() + rhs.Value());
  return tmp;
}