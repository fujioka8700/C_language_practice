#ifndef INTEGER_HPP
#define INTEGER_HPP

class Integer {
  public:
    explicit Integer(int value) : value_(value) {};

    int Value() const;

    Integer operator+(const Integer& rhs) const;

  private:
    int value_;
};

#endif // INTEGER_HPP