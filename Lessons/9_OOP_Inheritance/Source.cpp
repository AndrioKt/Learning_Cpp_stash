#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

//---------------------------
//----Наследование классов---
//----------------------------

class Human
{
	string name;
public:
	string getName()
	{
		return name;
	}
	void SetName(string name)
	{

		this->name = name;
	}

};
//В данном случае и класс студент и професор могут унаследовать часть характеритстик базового класса Human

class Student:public Human //мы унаследовали все характеристики класса Человек, и полностью его повторяет
{
public:
	//string name; после наследования эта строка уже будет не нужна
	string group;
	void learn()//создадим какой либо метод, например метод обучаться
	{
		cout << " i am learning!" << endl;
	}

};

class ExtramuralStuden:public Student //создадим отдельный класс для студента ЗАОЧНИКА, и добавим ему наследования класса студент.
	//Благодаря чему он унаследует как характеристики и методы  класса Student, так и Human
{
public:
	void learn()
	{
		cout << " i am learning, but at home!" << endl;
	}
};

class Professor :public Human
{
public:
//	string name; после наследования эта строка уже будет не нужна
	string subject;

};

int main()
{
	Student st;
	Professor pr;
	Human h;
	ExtramuralStuden extraSt;
	string name;
	cout << "Enter name" << endl;
	cin >> name;
	//st.name; - благодаря наследованию студент теперь так же имеет поле name, унаследованный от класс Human
	st.learn();// таким образом студент может использовать этот метод
	extraSt.learn();//метод learn имеется и в классе студент и в классе заочник, при наследовании берется метод именно из класса ЗАОЧНИК. Таким образом происходит переопределение метода
	st.SetName(name);
	cout << st.getName()<<endl;//таким образом при наследовании класса Человек, так же унаследуется и его геттер/сеттер, а значит будет доступ к приватному полю name
	return 0;
}