#include <iostream>
#include <clocale>

#include "../Domain/Circle.h"

int main() 
{
	setlocale(LC_CTYPE, "RUS");

	double radius;

	std::cout << "¬ведите радиус круга: ";
	std::cin >> radius;
	std::cout << "¬веденный радиус: " << radius << "\n";

	return 0;
}