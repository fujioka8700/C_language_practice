#ifndef BRIGHTNESS_HPP
#define BRIGHTNESS_HPP

class Brightness {
  public:
    explicit Brightness(int value) : value_(value) {}

    int Value() const;

    static Brightness Maximum();
    static Brightness Minimum();
    static Brightness Median();

  private:
    int value_;
};

#endif // BRIGHTNESS_HPP