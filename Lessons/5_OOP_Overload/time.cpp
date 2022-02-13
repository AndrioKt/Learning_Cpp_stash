#include "time.h"
#include <iostream>
#include <conio.h>
using namespace std;

time::time()
{
	hours = minutes = seconds = 0;
}

time::time(ui sec)
{
	hours = sec / 3600;
	minutes = sec % 3600 / 60;
	seconds = sec % 3600 % 60;
}

time::time(ui h, ui m, ui s)
{
	if (h > 24 or m > 60 or s > 60)
	{
		time::time();//вызываем конструктор по умолчанию
		return;
	}
	
	hours = h;
	minutes = m;
	seconds = s;
}

time time::operator+(const time& t) const//создаем метод для перегрузки операции сложения времени(+)
{
	time result;
	result.seconds = (seconds + t.seconds % 60);//находим общее количество секунд
	result.minutes = (minutes + t.minutes + (seconds + t.seconds) / 60) % 60;//здесь задаем минуты, тут:(seconds + t.seconds) / 60 учитываем что когда секунды доходят до 60 прибавляется 1 минута
	result.hours = (hours + t.hours + (minutes + t.minutes) / 60);

	return result;
}

time::~time()
{
	
}
