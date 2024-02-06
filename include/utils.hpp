#ifndef UTIlS_HPP
#define UTIlS_HPP

class Integer;
class RealNumber;

RealNumber operator+(const Integer& lhs, const RealNumber& rhs);
RealNumber operator+(const RealNumber& lhs, const Integer& rhs);

#endif
