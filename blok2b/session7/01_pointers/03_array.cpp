#include <iostream>
// written by: Marc Groenewegen

int sumsquares(int *block)
{
int total=0;

  for(int i=0; i<10; i++) total += block[i]*block[i];
  return total;
} // sumsquares()


int main()
{
  // new array with static initialisation
  // int lijst[10]={'a','b','c','d','e','f','g','h','i','j'};

  int *lijst = new int[10]; // new array
  for(int i=0; i<10; i++) lijst[i] = i; // fill array

  for(int i=0; i<10; i++){ // show array contents
    std::cout << *(lijst+i) << std::endl;
  }

  std::cout << sumsquares(lijst) << std::endl;

  return 0;
}
