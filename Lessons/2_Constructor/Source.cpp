
#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
#include <string>
using namespace std;
//-------------------------------------------------------
					/* Конструкты */
//-------------------------------------------------------
class Ball
{
private:
	string m_color;
	int m_radius;
public: 
	/*
	Ball() // Конструктор по умолчанию (задает параметры при создании)
	{
		m_color = "Red";
		m_radius = 20;
	}
	Ball(const string & Color) // конструктор, с помощью которого можно задать цвет через аргумент (ссылка нужна для оптимизации и уменьшения резеврируемой памяти)
	{
		m_color = Color;
		m_radius = 20;
	}
	Ball(int Radius)// контруктор задающий только радиус в аргументе
	{
		m_color = "Red";
		m_radius = Radius;
	}
	Ball(const string& Color, int Radius)
	{
		m_color = Color;
		m_radius = Radius;
	}
	Ball(const string& Color = "Red", int Radius = 20)
	{
		m_color = Color;
		m_radius = Radius;
	} */      
	//не оптимизированная версия, можно обьединить конструкторы цвета и цвета+радиус в один, заменив конструкт по умолчанию:

	Ball(int Radius)// контруктор задающий только радиус в аргументе
	{
		m_color = "Red";
		m_radius = Radius;
	}
	Ball(const string& Color = "Red", int Radius = 20)
	{
		m_color = Color;
		m_radius = Radius;
	}
	// оптимизированная версия, где обьединили конструкторы цвета и цвета+радиус в один.
	void print()
{
	cout << "Color is " << m_color << "\tRadius is " << m_radius << endl;
} 
};

int main()
{
	Ball def;
	def.print();

	Ball black ("black");
	black.print();

	Ball radius(30);
	radius.print();

	Ball blackradius("black", 20);
	blackradius.print();
	
	Ball optimized("sss",12);
	optimized.print();

	return 0;
