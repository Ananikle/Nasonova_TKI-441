#include <iostream>
#include <clocale>

#include "../Domain/Circle.h"

int main() 
{
	setlocale(LC_CTYPE, "RUS");

	double radius;

	std::cout << "Введите радиус круга: ";
	std::cin >> radius;
	std::cout << "Введенный радиус: " << radius << "\n";

	return 0;
}