#include <iostream>

#include "Wolf.h"


std::ostream& operator<<(std::ostream& os, const Wolf& rhs)
{
  return os << rhs.make_sound();
}

