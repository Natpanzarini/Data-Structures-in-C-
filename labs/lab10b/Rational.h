//Natalio Panzarini
//Nafeis W
//Cameron H
#pragma once

#include <iostream>

class Rational{
  private:
    int n_,d_;

  public:
    void numerator(int num){
      n_ = num;
    }

    void denominator(int num){
      d_= num;
    }

    int numerator() const
    { return n_; }

    int denominator() const
    { return d_; }

    //MEMBER OVERLOADS

    Rational& operator +=(Rational& rhs);
    Rational& operator -=(Rational& rhs);
    Rational& operator *=(Rational& rhs);
    Rational& operator /=(Rational& rhs);

};

bool operator==(const Rational& rhs, const Rational& lhs);
Rational& operator +(Rational& rhs, Rational& lhs);
Rational& operator -(Rational& rhs, Rational& lhs);
Rational& operator *(Rational& rhs, Rational& lhs);
Rational& operator /(Rational& rhs, Rational& lhs);

double to_double(Rational& lhs);

