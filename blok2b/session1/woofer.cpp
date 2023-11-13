#include <iostream>

class Woofer
{
public:
  float magnet;
  float coil;

  void move()
  {
    coil = 0.73;
    std::cout << "Coil position: " << coil << std::endl;
  }

};


int main()
{
  Woofer myWoofer;
  myWoofer.move();

  return 0;
}

