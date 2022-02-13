#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

//   ����� ��������� (�������� ������������� ������� ������ ����������)
//auto_ptr
//unique_ptr
//shared_ptr

template<typename T>
class SmartPointer
{
	
public:
	SmartPointer(T* ptr)//��� ������ ����� ������������ �� �� ���� ����� ���������� ���������
	{
	this->ptr = ptr;
	}
	~SmartPointer()//����������� ������������� �����������, ��� � ����� ��������� ���������
	{
		delete ptr;
	}
T& operator*()//���������� �������� �������������
{
	return *ptr;
}
private:
T* ptr;//��������� � ����� ������ T ����� �������� ���������� �� ����� ��� ������
};



int main()
{
	

	shared_ptr<int>ap1(new int(5)); //���� ��������� ��������� �� ������, �� � ������� ����� ���� ������ ������ ������ ���������� ������: shared_ptr<int[]>
	shared_ptr<int>ap2(ap1);
	cout << *ap1 << endl;
	return 0;
}