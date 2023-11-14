#include <iostream>

class Woofer
{
public:
  float diameter;
  int impedance;
  float maxPower;
  // Material material;
  float conePosition;

  void move(float position)
  {
    conePosition = position;
    std::cout << "Woofer position: " << conePosition << std::endl;
  }

};

int main()
{
  Woofer myWoofer1;
  myWoofer1.move(0.05);

  Woofer myWoofer2;
  myWoofer2.move(0.42);
}

