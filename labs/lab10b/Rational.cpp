//Natalio Panzarini
//Nafeis Weixelman
//Cameron H


#include "Rational.h"

#include <iostream>

using namespace std;


Rational& Rational::operator +=(Rational& rhs){
  int c = rhs.numerator();
  int d = rhs.denominator();
  int a = this->numerator();
  int b = this->denominator();
  a = (a*d) + (b*c);
  b = b*d;
  return *this;
}

Rational& Rational::operator -=(Rational& rhs){
  int c = rhs.numerator();
  int d = rhs.denominator();
  int a = this->numerator();
  int b = this->denominator();
  a = (a*d) - (b*c);
  b = b*d;
  return *this;
}

Rational& Rational::operator *=(Rational& rhs){
  int c = rhs.numerator();
  int d = rhs.denominator();
  int a = this->numerator();
  int b = this->denominator();
  a = (a*c);
  b = b*d;
  return *this;
}

Rational& Rational::operator /=(Rational& rhs){
  int c = rhs.numerator();
  int d = rhs.denominator();
  int a = this->numerator();
  int b = this->denominator();
  a = (a*d);
  b = b*c;
  return *this;
}

Rational& operator+(Rational& lhs, Rational& rhs){
  return lhs += rhs;
}

Rational& operator-(Rational& lhs, Rational& rhs){
  return lhs -= rhs;
}

Rational& operator*(Rational& lhs, Rational& rhs){
  return lhs *= rhs;
}

Rational& operator/(Rational& lhs, Rational& rhs){
  return lhs /= rhs;
}

bool operator==(const Rational& lhs, const Rational& rhs){
  int c = rhs.numerator();
  int d = rhs.denominator();
  int a = lhs.numerator();
  int b = lhs.denominator();
  return (a == b) && (c ==d);
}

int main()
{
  return 0;
}

double to_double(Rational& lhs){
  int c = lhs.numerator();
  int d = lhs.denominator();
  (double)c;
  return c/d;
}
  
