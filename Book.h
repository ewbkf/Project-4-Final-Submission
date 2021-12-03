#pragma once
#include <string>
#include <iostream>

using namespace std;

class Book : public Media {

private:
	string author;
	int pages;

public:
	Book();
	Book(char, string, string, int, string, int, int);
	void    setAuthor(string);
	void    setPages(int);
	string  getAuthor();
	int     getPages();

	void print(ostream& o);
};