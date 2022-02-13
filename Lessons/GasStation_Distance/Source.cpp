#include <iostream>
#include <string>
#include <vector>

//*******Оптимальное количество остановок на заправках********
//Бак автомобиля вмещает бензин на дистанцию 400км, заправки находятся на расстоянии {200,375,550,750,950} от старта

void Optimal()
{
int GasTank = 400;
int Stations[]{ 200,375,550,750,950 };
int Stops(0);
int CurrentPos(0);
	while(CurrentPos!= 950)
	{	
		for (int i = 4; i >=0; i--)
		{
			if (Stations[i]-CurrentPos- GasTank <0)
			{
				CurrentPos = Stations[i];
				Stops++; break;
			}
		}
	}
	// Минимальное возможное количество остановок для такой задачи 3(включая финишную), либо 2(если не считать финишную)
	std::cout <<"Количество остановок (включая финишную): "<< Stops << std::endl;
}



int main()
{
	setlocale(LC_ALL, "ru");
	Optimal();
	return 0;
}