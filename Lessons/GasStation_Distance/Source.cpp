#include <iostream>
#include <string>
#include <vector>

//*******����������� ���������� ��������� �� ���������********
//��� ���������� ������� ������ �� ��������� 400��, �������� ��������� �� ���������� {200,375,550,750,950} �� ������

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
	// ����������� ��������� ���������� ��������� ��� ����� ������ 3(������� ��������), ���� 2(���� �� ������� ��������)
	std::cout <<"���������� ��������� (������� ��������): "<< Stops << std::endl;
}



int main()
{
	setlocale(LC_ALL, "ru");
	Optimal();
	return 0;
}