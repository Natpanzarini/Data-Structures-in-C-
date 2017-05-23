#pragma once 

#include <string>

class Animal {

  public:
    virtual ~Animal() {}

    virtual std::string make_sound() const = 0;

    virtual std::string name() const = 0;

};

