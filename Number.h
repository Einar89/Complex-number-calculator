#pragma once
#include <iostream>

class Numeric_value
{
public:
	virtual void print(std::ostream &out) = 0;
	virtual ~Numeric_value() {};
};


