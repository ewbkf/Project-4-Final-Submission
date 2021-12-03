#include <string>
#include <iostream>
#include "Media.h"
using namespace std;

Media::Media() {
	type = ' ';
	title = " ";
	rating = -1;
	yearReleased = -1;
	genre = " ";
}

Media::Media(char type, string t, int r, int yr, string g) {
	this->type = type;
	title = t;
	rating = r;
	yearReleased = yr;
	genre = g;
	//cout << "title :" << this->title << endl;
}

void Media::setType(char c) { this->type = c; }
void Media::setTitle(string t) { this->title = t; }
void Media::setRating(int r) { rating = r; }
void Media::setYearReleased(int yr) { yearReleased = yr; }
void Media::setGenre(string g) { genre = g; }

char   Media::getType() { return type; }
string Media::getTitle() { return title; }
int    Media::getRating() { return rating; }
int    Media::getYearReleased() { return yearReleased; }
string Media::getGenre() { return genre; }

void Media::print(ostream& o) {
	o << "Media: " << endl;
}