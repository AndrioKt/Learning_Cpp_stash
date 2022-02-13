#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

// *******Наследование шаблонных классов***Специализация шаблонов класса****
/*
template<class T1>//создаем шаблонный класс
class TypeSize
{
protected:
	T1 value;//в шаблонном классе параметры могут принимать любой тип данных
public: TypeSize(T1 value)
{
	this->value = value;
}

		void DataTypeSize()
		{
			cout << "value " << sizeof(value) << endl;

		}
};

template <class T1>////при наследовании шаблонных классов требуется указывать тип данных, поэтому так же требуется создать шаблон
class TypeInfo:public TypeSize<T1>
{
	//что бы работать с наследуемым шаблонным классом необходимо создавать коснтруктор, который так же вызывает конструктор базового класса
public:
	TypeInfo(T1 value):TypeSize<T1>(value)
	{

	}
	void ShowTipeName()
	{
		cout << "Type Name: " << typeid(this->value).name() << endl; //typeid сюда надо передать тип, информацию в котором надо получить (например параметр базового класса типпа Т1)
	}
};*/

template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;

	}
};

template<>//для создания специализации создаем шаблон с пустыми скобками
class Printer<string>//а при создании специализации в классе указываем тип данных, взаимодействие с которым мы хотим изменить
{
public:
	void Print(string value)//данный методы как бы перегрузит метод из другого класса Printer но только для типа данных string
	{
		cout << "_____" << value << "____" << endl;
	}
};//если в данном классе (специализации) не указывать тело, то будет невозможно любое взаимодействие класса с типом данных string. 
  //таким образом можно огриничивать использование какого либо типа данных
int main()
{
	/*
	double a = 2;

	TypeInfo<double> c(a);//шаблонный класс может работать только с 1 типом данных который мы указываем при создании обьекта
	c.ShowTipeName();//теперь дочерний клас будет так же выводиь тип данных, который мы выб
	c.DataTypeSize();*/
	
	Printer <string> p;

	p.Print("dsfg");
	
	return 0;
}
