#include <iostream>
#include <cassert> 
using namespace std;

class Fruit
{
	string name;
	string color;
public:
	Fruit() {}
	
	Fruit(string name, string color) 
	{
		this->name = name;
		this->color = color;
	}
	string getColor() const { return color; }
	string getName() const { return name; }
};


class Apple:public Fruit
{
	double Fiber;
public: 
	Apple(string name, string color, double fiber):Fruit(name, color),Fiber(fiber)
	{
	}
	double getFiber() const { return Fiber; }
friend ostream& operator<< (ostream& out, const Apple& point)
{
	out << "Point(" << point.getName() << "," << point.getColor() << "," << point.getFiber() <<")";
	return out;
}
};

class Banana :public Fruit
{
public:
	Banana(string name, string color) :Fruit(name, color)
	{
	}
	friend ostream& operator<< (ostream& out, const Banana& point)
	{
		out << "Point(" << point.getName() << "," << point.getColor() <<  ")";
		return out;
	}
};

int main()
{
	const Apple a("Red delicious", "red", 7.3);
	cout << a << endl;

	const Banana b("Cadendish", "yellow");
	cout << b << endl;
	return 0;
}

