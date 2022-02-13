#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

//   Умные указатели (способны автоматически очищать память примитивно)
//auto_ptr
//unique_ptr
//shared_ptr

template<typename T>
class SmartPointer
{
	
public:
	SmartPointer(T* ptr)//при вызове этого конструктора мы по сути будем передавать указатель
	{
	this->ptr = ptr;
	}
	~SmartPointer()//Обязательно использование деструктора, где и будет удаляться указатель
	{
		delete ptr;
	}
T& operator*()//перегрузим оператор разименования
{
	return *ptr;
}
private:
T* ptr;//указатель с типом данным T будет способен указаывать на любой тип данных
};



int main()
{
	

	shared_ptr<int>ap1(new int(5)); //Если указатель указывает на массив, то в скобках кроме типа данных должны стоять квадратные скобки: shared_ptr<int[]>
	shared_ptr<int>ap2(ap1);
	cout << *ap1 << endl;
	return 0;
}