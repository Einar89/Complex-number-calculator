#include "Calculations.h"
#include <iostream>
#include <conio.h>
#include "Complex.h"

Complex Addition(Complex &first, Complex &second) {
	return first + second;
}

Complex Subtraction(Complex &first, Complex &second) {
	return first - second;
}

Complex Multipication(Complex &first, Complex &second) {
	return first * second;
}

Complex Division(Complex &first, Complex &second) {
	return first / second;
}

int CalcOptions() {
	bool exit = false;
	char operation = '0';
	char again = '0';
	double real = 0;
	double imaginary = 0;
	
	while (exit == false)
	{
		std::cin >> real >> imaginary;	
		Complex *first = new Complex(real, imaginary);
		std::cin >> operation;

		switch (operation)
		{
		case '+':{
			std::cin >> real >> imaginary;
			Complex *second = new Complex(real, imaginary);
			std::cout << *first << " + " << *second << " = " << Addition(*first, *second) << std::endl;
			delete second;
			break;}
		case '-': {
			std::cin >> real >> imaginary;
			Complex *second = new Complex(real, imaginary);
			std::cout << *first << " - " << *second << " = " << Subtraction(*first, *second) << std::endl;
			delete second;
			break;}
		case '*': {
			std::cin >> real >> imaginary;
			Complex *second = new Complex(real, imaginary);
			std::cout << *first << " * " << *second << " = " << Multipication(*first, *second) << std::endl;
			delete second;
			break;}
		case '/': {
			std::cin >> real >> imaginary;
			Complex *second = new Complex(real, imaginary);
			std::cout << *first << " / " << *second << " = " << Division(*first, *second) << std::endl;
			delete second;
			break;}
		}

		delete first;

		again = _getch();
		if (again == 27)
			exit = true;
	}
	return 0;
}

void Start()
{
	std::cout << "\n\n\n\n\n\n              It's a simple complex number calculator.\n";
	std::cout << "                           Available options:\n";
	std::cout << "           addition, subtraction, multiplication and division.\n";
	std::cout << "                         Press any key to begin.";
}