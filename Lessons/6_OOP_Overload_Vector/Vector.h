#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
enum vec { Decart, Polar };//��������� ��� ������ � ����� ���� ��������� ��������
class Vector
{
	double x;
	double y;
	double angle;//���� � ��������
	double modul;//������ �������
	void Dec_to_polar()//�������������� �� ���������� � ��������
	{
		modul = sqrt(x * x + y * y);//�� ������� �������� ������� ������ ������� (������ ��������������� ������� ��������� �� �������� ������������, ����� 2 ������� ������������ � ��������� - 3 �������)
		angle = atan2(x, y);
	}
	void polar_to_dec()//�������������� �� �������� � ����������
	{
		x = cos(angle) * modul;//�������������� ������� �������������� (���������� ������� �������������� �����)
		y = sin(angle) * modul;
	}
	vec Mode;//������ �������������, ��� ������ � ����� ������� ����� ��������
public:
	Vector()//������ �� ��������� ����������� � ���������� �������
	{
		Mode = Decart;
		x = 0;
		y = 0;
		Dec_to_polar();
	}
	Vector(double a, double b, vec mode=Decart)
	{
		if (mode == Decart)
		{
			Mode = mode;
			x = a;
			y = b;
			Dec_to_polar();
		}
		if (mode == Polar)
		{
			Mode = mode;
			modul = a;
			angle = b;
			polar_to_dec();
		}
	}

	double operator+()//���������� ��������+ ��� ���������� ������
	{
		return modul;
	}

	Vector operator+ (Vector & v)//������� �������� ��������
	{
		Vector result;
		result.x = x + v.x;
		result.y = y + v.y;
		result.Dec_to_polar();//����� ������ ��������������, ��� �� �������� � � �������� ������� ���������
		return result;
	}
	Vector operator- (Vector & v)//������� �������� ��������
	{
		return Vector(-x, -y, Decart);
	}
	Vector operator*(double A)
	{
		
		return Vector (x * A, y* A);
	}
	friend Vector operator*(double A, Vector & v1) // ��������� ������ ���������� ����� �� ����� ������� ��������� (�������� 3*v1 ������������� � v1*3)
	{
		return v1 * A;
	}
	friend std::ostream& operator<< (std::ostream& os, const Vector& v1)
	{
		if (v1.Mode == Decart)
		os << "X: " << v1.x << ", Y: " << v1.y;
		else os << "Module: " << v1.modul << ", angle(degree): " << v1.angle * (180 / 3.14159);//����� ��������� � ��������
		return os;
	}
	void ChangeMode(vec mode)
	{
		Mode = mode;
	}
};

