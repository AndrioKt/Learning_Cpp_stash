#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
constexpr auto M_PI = 3.1415;
using namespace std;
double Abs(double a)
{
	return abs(a);
}
double abs_inaccuracy(double a, double b)
{
	return abs(a - b);
}
double relativ_inaccurecy(double a, double b)
{
	return (double((abs_inaccuracy(a, b)) / b) * 100);

}
double sin(double x)
{
	double n = x;
	double sum = 0.0;
	int i = 1;
	do//цикл разложения синуса в ряд Тейлора
	{
		sum += n;
		n *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
		i++;
	} while (Abs(n) > (1e-12));//ставим ограничение при приближении к 0, т.к ряд стремится к 0 но никогда не достигает его
	return sum;
}
double cos(double x)
{
	double n = x;
	double sum = 0.0;
	int i = 1;
	do//цикл разложения синуса в ряд Тейлора
	{
		sum += n;
		n *= -1.0 * x * x / ((2 * i) * (2 * i - 1));
		i++;
	} while (Abs(n) > (1e-12));//ставим ограничение при приближении к 0, т.к ряд стремится к 0 но никогда не достигает его
	return sum;
}

int main()
{
	mark:
	double x;
	cin >> x;
	cout << sin(M_PI/x) << endl;
	cout << cos(M_PI/x) << endl;
	goto mark;
	return 0;
}