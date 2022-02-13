#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
enum vec { Decart, Polar };//нумерация для выбора в каком типе координат задавать
class Vector
{
	double x;
	double y;
	double angle;//угол в радианах
	double modul;//длинна вектора
	void Dec_to_polar()//преобразование из декартовой в полярную
	{
		modul = sqrt(x * x + y * y);//по теореме Пифагора находим длинну вектора (длинна результирующего вектора находится по принципу треугольника, когда 2 вектора складываются и результат - 3 сторона)
		angle = atan2(x, y);
	}
	void polar_to_dec()//преобразование из полярной в декартовую
	{
		x = cos(angle) * modul;//математическая формула преобразования (нахождение катетов противолежащих углов)
		y = sin(angle) * modul;
	}
	vec Mode;//задали переключатель, для выбора в какой системе коорд задавать
public:
	Vector()//задаем по умолчанию конструктор в Декартовой системе
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

	double operator+()//перегрузим оператор+ как нахождение модуля
	{
		return modul;
	}

	Vector operator+ (Vector & v)//сделаем сложение векторов
	{
		Vector result;
		result.x = x + v.x;
		result.y = y + v.y;
		result.Dec_to_polar();//важно ввести преобразование, что бы работало и в полярной системе координат
		return result;
	}
	Vector operator- (Vector & v)//сделаем сложение векторов
	{
		return Vector(-x, -y, Decart);
	}
	Vector operator*(double A)
	{
		
		return Vector (x * A, y* A);
	}
	friend Vector operator*(double A, Vector & v1) // благодаря второй перегрузке будет не важен порядок умножения (например 3*v1 преобразуется в v1*3)
	{
		return v1 * A;
	}
	friend std::ostream& operator<< (std::ostream& os, const Vector& v1)
	{
		if (v1.Mode == Decart)
		os << "X: " << v1.x << ", Y: " << v1.y;
		else os << "Module: " << v1.modul << ", angle(degree): " << v1.angle * (180 / 3.14159);//сразу реализуем в градусах
		return os;
	}
	void ChangeMode(vec mode)
	{
		Mode = mode;
	}
};

