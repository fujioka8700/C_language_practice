#ifndef RECTANGE_HPP
#define RECTANGE_HPP

 class Rectangle {
  public:
    virtual void Describe() const;
    
    int Area() const;

  protected:
    int height_;
    int width_;
};

#endif // RECTANGE_HPP