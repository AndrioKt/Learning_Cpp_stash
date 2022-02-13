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
	bool Push(int n) //����� "�������� � ����"
	{
		if (index == Max)
			return false;//���� ������ ����� ����� ����, �� ������ �� ����� �� ������� �������
		else
		{
			arr[index] = n;
			index++;
			return true;
		}
	}
	int pop()//����� ������������ (��������) �� �����
	{
		if (index < 0)
			return 0;//�� ������ �����, � ������ ������ ����� "����������"
		else return arr[--index];
	}
	bool Is_empty()//�������� ������ �� ����
	{
		if (index <= 0)
			return true;
		else return false;
	}
	bool Is_full()//�������� ������ �� ����
	{
		if (index == Max)
			return true;
		else return false;

	}

};

