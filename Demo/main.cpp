#include <iostream>
#include <clocale>

#include "../Domain/Circle.h"

int main() 
{
	setlocale(LC_CTYPE, "RUS");

	double radius;

	std::cout << "������� ������ �����: ";
	std::cin >> radius;
	std::cout << "��������� ������: " << radius << "\n";

	return 0;
}