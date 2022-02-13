#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Book
{
	int Page;
	int Max_pages;
	int Markpage;
	
public:
	Book();
	int getPage();
	int getMax_pages();
	void SetBookmark(int page);
	int GetBookmark();
	void setPage(int Page);
	~Book();
	int Forward(int currentPage);
	int Back(int currentPage);

};

