//Natalio Panzarini
//Lab11b

#include <iostream>

class Boat {
  public:
    Boat() : len{0}
  {}
  virtual ~Boat(){}
  void length(int length) {
    len = length;
  }
  int length() {
    return len;
  }
  virtual void move () const {
    std::cout << " drift ";
  }
  private:
    int len;
};
class SailBoat : public Boat {
  public:
    virtual ~SailBoat(){}
    void move() const override {
      std::cout << " hoist sail  ";
    }
};
class RowBoat : public Boat{
  public:
    virtual ~RowBoat(){}
    void row() const {
      std::cout << " row row ";
    }
};
int main() {
  Boat b1;
  SailBoat b2;
  RowBoat b3;
  b2.length(32);
  b1.move();
  b3.move();
  b2.move();
  std::cout << std::endl;
}
