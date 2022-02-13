#pragma once
#include <iostream>
class Stack
{
	int* arr;
	int Max;
	int index;
public:
	Stack(int number)
	{
		Max = 1000;
		index = 0;
		if (number <= Max)
		{
			arr = new int[number];
			Max = number;
		}
		else std::cout << "Stack Overflow!" << std::endl;
	}
	~Stack()
	{
		delete[]arr;
	};
	bool Push(int n) //метод "положить в стек"
	{
		if (index == Max)
			return false;//если индекс будет равен макс, то значит он вышел за пределы массива
		else
		{
			arr[index] = n;
			index++;
			return true;
		}
	}
	int pop()//метод выталкивания (изымания) из стека
	{
		if (index < 0)
			return 0;//не совсем точно, в идеале делать через "исключения"
		else return arr[--index];
	}
	bool Is_empty()//проверка пустой ли стек
	{
		if (index <= 0)
			return true;
		else return false;
	}
	bool Is_full()//проверка полный ли стек
	{
		if (index == Max)
			return true;
		else return false;

	}

};

