#pragma once
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Image
{ //�������� ��������� ����� ����� ������ ������� "��������"
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string getInfo()
		{
			return "Pixel: r=" + to_string(r) + "g " + to_string(g) + "b" + to_string(b);//to_string ����� ��� ������������(��������) �����
		}
		~Pixel() {}

	private:
		int r;
		int g;
		int b;
	};
	static const int LENGTH = 5;//������ ������� (��� �� ���������� ���� ����� � ������� ��������� ������ ������)
	Pixel pixels[LENGTH] //�������� ������ � ���������
	{
	Pixel(0,4,64),//������ ���� ������� �������(��������� �� 3 ��� ������)
	Pixel(4,12,10),
	Pixel(111,4,24),
	Pixel(244,244,14),
	Pixel(111,179,65)
	};
public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			pixels[i].getInfo();//����� �������� ���������� � ��������
		}
	}
	Image() {}
	~Image() {}
};