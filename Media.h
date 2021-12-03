#pragma once
#include <string>
#include <iostream>
using namespace std;

class Media {

protected:
	char type;
	string title;
	int rating;
	int yearReleased;
	string genre;

public:
	Media();
	Media(char, string, int, int, string);
	void setType(char c);
	void setTitle(string t);
	void setRating(int r);
	void setYearReleased(int yr);
	void setGenre(string g);

	char   getType();
	string getTitle();
	int    getRating();
	int    getYearReleased();
	string getGenre();

	virtual void print(ostream& o);
};