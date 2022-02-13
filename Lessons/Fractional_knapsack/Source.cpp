#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// ******Алгоритм нахождения максимальной ценности ДЕЛИМЫХ предметов, способных посместиться в рюкзак*******



class Thing
{
	double Cost;
	double Weight;
	double SpecificValue; //удельная ценность предмета (цена/вес)

public:
	double getCost() { return Cost; }
	double getWeight() { return Weight; }
	double getSpecificValue() { return SpecificValue; }
	int itemIndex;

	Thing(){}
	Thing(double cost, double weight, int itemIndex)
	{
		Cost = cost;
		Weight = weight;
		SpecificValue = cost / weight;
	}

	int AddThing(int Cur,int total)
	{
		for (int i = Weight; i <= Weight; i++)
		{
			Cur++;
			total += SpecificValue;
		}
	}
};
class Backpack : public Thing
{
	public:
	Backpack() {};

};

int main()
{	
	
	int CurrentCapacity(0);
	int totalcost(0);
	int BackPackCapacity = 7;
	Backpack ba;
	Thing a(20, 4,1);
	Thing b(18, 3,2);
	Thing c(14, 2,3);
	int mas[3]{ a.getSpecificValue(),b.getSpecificValue(),c.getSpecificValue() };
	std::sort(mas,mas + 3);
	std::reverse(mas, mas + 3);
	while (CurrentCapacity < BackPackCapacity)
	{
		for (int i = 0; i < 3; i++)
		{
			ba.AddThing(CurrentCapacity, totalcost);
		}
	}
	
	std::cout << mas[0] << std::endl;

	return 0;
}