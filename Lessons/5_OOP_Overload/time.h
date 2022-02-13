#pragma once
#include <iostream>
#include <conio.h>

//------------------------------------------------------
//***************���������� ��������**********************
//--------------------------------------------------------
typedef unsigned int ui;//��� �������� ����� ������ � �������� ��� ������ �� ui 
class time
{
	ui seconds;
	ui minutes;
	ui hours;
public:
	time();
	time(ui);
	time(ui,ui,ui);

	time operator+(const time&) const;
	friend std::ostream& operator<<(std::ostream& os,const time& t1)//���������� ��������� ���������� ������ <<. ������������� ������� �������� �������� ������ privet
	{
		os << t1.hours << " : " << t1.minutes << " : " << t1.seconds;
		return os;
	}
	~time();
};

