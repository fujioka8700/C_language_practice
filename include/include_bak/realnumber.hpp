#ifndef REALNUMBER_HPP
#define REALNUMBER_HPP

class Integer;

class RealNumber {
  public:
    explicit RealNumber(double value) : value_(value) {}

    double Value() const;

  private:
    double value_;
};

#endif // REALNUMBER_HPP