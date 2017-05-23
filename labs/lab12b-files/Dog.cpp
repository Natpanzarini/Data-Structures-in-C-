#include <iostream>

#include "Dog.h"

void Dog::play() 
{
  std::cout << "fetch!!\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& rhs)
{
  return os << rhs.make_sound();
}

