
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
/* Классы, обьекты, функции классов и методы классов*/
//-------------------------------------------------------

class Human //класс (класс является пользовательским типом данных)
{
private://модификатор доступа
	int age;//свойства класса
	string name;//свойства класса
	int weihgt;
public:
	void Print() // функция класса
	{
		cout << "Name: " << name << "\tWeight: " << weihgt << "\tage: " << age << endl;//задаем вывод свойств в консоль, при помощи функции Print
	}

	//задаем геттеры и сеттеры
	//геттеры служат для того, что бы другой программист мог понять что от него хотят получить
	// сеттеры позволяют другому программисту менять/задавать лишь то, что мы хотим
	int GetAge()
	{
		return age;
	}//Геттер. принято, что если нужно что то получить от программиста, то всегда должно начинаться с Get
	string GetName()
	{
		return name;
	}
	int GetWeight()
	{
		return weihgt;
	}
	void SetAge(int valueAge)
	{
		age = valueAge;
	};// Cеттер, принято начинать с Set
	void SetName(string Human_name)
	{
		name = Human_name;
	};// Cеттер, принято начинать с Set
	void SetWeight(int Human_weight)
	{
		weihgt = Human_weight;
	};// Cеттер, принято начинать с Set
};
int main()
{
	Human firstHuman;// объект класса Human
	firstHuman.SetAge(30);// присвоение значений свойствам класса через сеттер
	firstHuman.SetName("Ivan");
	firstHuman.SetWeight(100);
	
	cout << "-----------------------------" << endl;
	firstHuman.Print(); // вывод информации через функцию класса
	cout << "-----------------------------" << endl;

	cout << "name: " << firstHuman.GetName() << endl;//обычный вывод информации через геттер(можно напрямую выводить поставив общую видимость паблик, но это неприемлемо в крупных программах)
	cout << "age: " << firstHuman.GetAge() << endl;
	cout << "Weihgt: " << firstHuman.GetWeight() << endl<< endl;
	cout << "___________________"<<  endl;
	Human secondHuman;
	secondHuman.SetAge(22); // присвоение свойствам класса
	secondHuman.SetName("Sergey");
	secondHuman.SetWeight(60);

	cout << "-----------------------------" << endl;
	secondHuman.Print(); // вывод информации через функцию класса
	cout << "-----------------------------" << endl;

	cout << "name: "<< secondHuman.GetName() << endl;//обычный вывод информации через геттер
	cout << "age: " << secondHuman.GetAge() << endl;
	cout << "Weihgt: " << secondHuman.GetWeight() << endl;
	
	return 0;
}