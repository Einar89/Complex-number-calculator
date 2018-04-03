#pragma once
#include <iostream>
#include "Number.h"

class Complex : public Numeric_value
{
private:
	double re;
	double im;
public:
	Complex(double re = 0, double im = 0);
	~Complex(void);

	Complex operator+(Complex &right)
	{
		Complex temp;
		temp.re = this->re + right.re;
		temp.im = this->im + right.im;
		return temp;
	}

	Complex operator-(Complex &right)
	{
		Complex temp;
		temp.re = this->re - right.re;
		temp.im = this->im - right.im;
		return temp;
	}

	Complex operator*(Complex &right)
	{
		Complex temp;
		temp.re = (this->re * right.re) - (this->im * right.im);
		temp.im = (this->re * right.im) + (this->im * right.re);
		return temp;
	}

	Complex operator/(Complex &right)
	{
		Complex temp;
		temp.re = ((this->re * right.re + this->im * right.im) / (right.re * right.re + right.im * right.im));
		temp.im = ((this->im * right.re - this->re * right.im) / (right.re * right.re + right.im * right.im));
		return temp;
	}

	friend std::ostream &operator<<(std::ostream &out, Complex &c);

	void print(std::ostream &out)
	{
		out << *this;
	}
};