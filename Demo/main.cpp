#include <iostream>

#include "../Domain/Circle.h"
#include "../Domain/Circle.cpp"

int main()
{
	using namespace circle;

	try
	{
		double radius;

		std::cout << "Введите радиус круга: ";
		std::cin >> radius;

		circle::Circle first(radius);

		std::cout << "Введенный радиус: " << first.GetRadius() << "\n";
		std::cout << "Диаметр окружности: " << first.GetDiameter() << "\n";
		std::cout << "Длина окружности: " << first.GetLength() << "\n";
		std::cout << "Площадь окружности: " << first.GetArea() << "\n";

		std::cout << "\n Демонстрация перегрузки оператора вывода в поток:\n";
		std::cout << first << "\n";

		return 0;
	}
	catch (const std::exception& error)
	{
		std::cout << "ОШИБКА: " << error.what() << "\n";
	}

	return -1;
}