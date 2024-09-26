#include <stdexcept>
#include <cmath>

#include "Circle.h"

double circle::Circle::GetRadius() const
{
	return radius;
}

double circle::Circle::GetLength() const
{
	const double PI = 3.1415926535;
	return 2 * PI * radius;
}

double circle::Circle::GetArea() const
{
	const double PI = 3.1415926535;
	return PI * pow(radius, 2);
}

circle::Circle::Circle(const double radius)
{
	if (radius <= 0)
	{
		throw std::invalid_argument("Радиус должен быть задан положительным числом.");
	}

	Circle::radius = radius;
}

