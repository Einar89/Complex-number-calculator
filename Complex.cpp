#include <iostream>
#include "Number.h"
#include "Complex.h"

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::~Complex(void) {}

std::ostream &operator<<(std::ostream &out, Complex &c)
{
	out << "z=(" << c.re << ", " << c.im << ")";
	return out;
}

