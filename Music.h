#pragma once
#include <string>
#include <iostream>

using namespace std;

class Music : public Media {

private:
	string artist;
	int duration;

public:
	Music();
	Music(char, string, string, int, string, int, int);
	void    setArtist(string);
	void    setDuration(int);
	string  getArtist();
	int     getDuration();
	void print();
	void print(ostream& o);
};