#include "pr13.h"
#include <iostream>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Type1::get_answer()
{
	std::cout << "�������� �������� ����� �" << std::endl << std::endl;
}

void Type1::show()
{
	std::cout << "���������: 0 = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type2::Type2(double a1)
{
	A = a1;
}
void Type2::show()
{
	std::cout << "���������: " << A << "x^2 = 0" << std::endl;
}

void Type2::get_answer()
{
	std::cout << "�������� ��������� " << A << "x^2 = 0 �������� � = 0" << std::endl << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type3::Type3(double c1)
{
	C = c1;
}

void Type3::get_answer() {
	if (C != 0)
	{
		std::cout << "������� ��������� ���" << std::endl << std::endl;
	}
	else
	{
		std::cout << "�������� ��������� �������� ����� ����� �" << std::endl;
	}
}

void Type3::show()
{
	std::cout << "���������: " << C << " = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type4::Type4(double a1, double c1)
{
	A = a1;
	C = c1;
}

void Type4::get_answer()
{
	double right, answer;
	right = C * (-1) / A;
	if (right <= 0)
	{
		std::cout << "������ ���";
	}
	else
	{
		answer = sqrt(right);
		std::cout << "������� ���������: x1 = " << answer << " x2 = " << answer * (-1) << std::endl;
	}
}

void Type4::show()
{
	std::cout << "���������: " << A << "x^2 + " << C << " = 0" << std::endl;
}
void Type4::Get_answer_podbor()
{
	if ((-(C) / A) < 0)
	{
		std::cout << "������ ���" << std::endl;
	}
	else
	{
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i += 0.01)
		{
			double temp = abs(0 - A * i * i - C);
			if (temp < min)
			{
				min = temp;
				x = i;
			}
		}
		std::cout << "����� ��������� ������� �������: �1 = " << x << " | x2 = " << -(x) << std::endl << std::endl;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type5::Type5(double b1, double c1)
{
	B = b1;
	C = c1;
}

void Type5::get_answer()
{
	double answer;
	answer = (-C) / B;
	std::cout << "������ ���������: " << -C / B << std::endl;
}

void Type5::Get_answer_podbor()
{
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double temp = abs(0 - B * (i)-C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	std::cout << "������ ��������� ��������� ������� �������: " << x << std::endl << std::endl;
}

void Type5::show()
{
	std::cout << "���������: " << B << "x" << " + " << C << " = 0" << std::endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type6::Type6(double a1, double b1, double c1)
{
	A = a1;
	B = b1;
	C = c1;
}

void Type6::get_answer()
{
	double D;
	D = B * B - 4 * A * C;
	if (D == 0) {
		std::cout << "��������� ����� ���� ������: " << (-B) / (2 * A) << std::endl;
	}
	else
	{
		if (D > 0) {

			double x1, x2;
			x1 = (-B + sqrt(D)) / (2 * A);
			x2 = (-B - sqrt(D)) / (2 * A);

			std::cout << "����� ���������: " << std::endl << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;

		}
		else
		{
			std::cout << "D < 0, ������ ���" << std::endl;
		}
	}
}

void Type6::Get_answer_podbor()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		std::cout << "������ ���" << std::endl << std::endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-B * i - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		std::cout << "������ ��������� ������� �������: " << x << std::endl << std::endl;
	}
}

void Type6::show()
{
	std::cout << "���������: " << A << "x^2 + " << B << "x + " << C << " = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type7::Type7(double b1)
{
	B = b1;
}

void Type7::get_answer()
{
	std::cout << "������ ���������: � = 0" << std::endl << std::endl;
}

void Type7::show()
{
	std::cout << "���������: " << B << "x = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Type8::Type8(double a1, double b1)
{
	A = a1;
	B = b1;
}

void Type8::get_answer()
{
	std::cout << "����� ���������: " << std::endl << "x1 = 0" << std::endl << "x2 = " << -B / A << std::endl;
}

void Type8::Get_answer_podbor()
{
	double min = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		if (i != 0) {
			double temp = abs(0 - A * i * i - B * (i));
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
	}
	std::cout << "������ ��������� ������� �������: " << x << std::endl;
}

void Type8::show()
{
	std::cout << "���������: " << A << "x^2 + " << B << "x = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
