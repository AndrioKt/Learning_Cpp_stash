#include <iostream>
#include <functional>
#include <vector>

using namespace std;
// ������ ������� � ����������� ������� fenction

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
	// ����� ������� ������� ��� ���������� ����� ��� ��������� ������� � �������� ���������:
	DoWork(vc, [](int a)
		{
			cout << a << endl;
		});
	//��� ����������, ��� �� �� ������ � ���������� ������������ ������ �������, ���������� ������� �������
	//� ���������� ������  �� ������ ���������� ���������(����������, ���������� � ��) ����������� ��� �������, �.� ��� ����� ������ ������� �� ����� ��� ��� ��� ���
	int p=0;
	auto f = [&p]() //��� �� ���� ����������� �������� ��������� ������� ��� ������ auto
	{
		p = 5;
		cout << p << endl;
	};

	f();
	return 0;
}