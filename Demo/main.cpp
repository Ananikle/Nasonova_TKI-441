#include <iostream>
#include <clocale>

#include "../Domain/Circle.h"

int main()
{
	setlocale(LC_CTYPE, "RUS");

	using namespace circle;

	try
	{
		double radius;

		std::cout << "Введите радиус круга: ";
		std::cin >> radius;
		
		Circle first(radius);

		return 0;
	}
	catch (const std::exception& error)
	{
		std::cout << "ОШИБКА: " << error.what() << "\n";
	}

	return -1;
}