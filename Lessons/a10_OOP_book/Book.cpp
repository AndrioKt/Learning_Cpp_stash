#include "Book.h"
#include <iostream>
#include <conio.h>
using namespace std;
Book a;


Book::Book() 
{
	Page = 0;
	Max_pages = 265;
	Markpage = 0;
}
int Book::getPage()
{
	return int (Page);
}
int Book::getMax_pages()
{
	return int(Max_pages);
}
void Book::setPage(int page)
{
	Page = page;
}
void Book::SetBookmark(int page)
{
	Markpage = page;
}
int Book::GetBookmark()
{
	return Markpage;
}
int Book::Forward(int currentPage)
{
	Page = ++currentPage;
	return Page;
}
int Book::Back(int currentPage)
{
	Page = --currentPage;
	return Page;
}
Book::~Book()
{
}

