#pragma once

/**
* @brief ����� ����
*/
class Circle
{
private:
	/**
	* @brief ������
	*/
	double radius;
public:
	/*
	* @brief ������� ������
	* @return ������
	*/
	double GetRadius() const;
	/*
	* @brief ���������� ����� ����������
	* @return ����� ����������
	*/
	double GetLength() const;
	/*
	* @brief ���������� ������� ����������
	* @return �������
	*/
	double GetArea() const;
	/*
	* @brief �������������� ����� ������ ������ Circle
	* @param radius ������
	*/
	Circle(const double radius);
};
