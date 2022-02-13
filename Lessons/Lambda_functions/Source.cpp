#include <iostream>
#include <functional>
#include <vector>

using namespace std;
// лямбда функции и полиморфная обертка fenction

void DoWork(vector<int>&vc, function<void(int) > func)
{
	for(auto el : vc)
	{
		func(el);
	}
}
int main()
{
	vector<int>vc{ 1,51,4,10,44,98,8,12,22,29,49 };
	function<void(int) > f;

/*	f = [](int a)
	{
		cout << a << endl;
	};
	
	DoWork(vc, f);*/
	// более коротки вариант это передавать сразу всю анонимную функцию в качестве параметра:
	DoWork(vc, [](int a)
		{
			cout << a << endl;
		});
	//это необходимо, что бы не писать в глобальном пространстве лишних функций, занимающих ресурсы системы
	//в квадратные скобки  по ссылке передаются аргументы(переменные, контейнеры и тд) находящиеся вне функции, т.к без этого лямбда функция не видит все что вне нее
	int p=0;
	auto f = [&p]() //так же есть возможность вызывать анонимную функцию при помощи auto
	{
		p = 5;
		cout << p << endl;
	};

	f();
	return 0;
}