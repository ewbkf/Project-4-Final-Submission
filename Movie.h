#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Movie : public Media {

private:
	string director;
	int duration;
	vector<string> stars;

public:
	Movie();
	Movie(char, string, string, int, string, int, int, vector<string>); 
	void    setDirector(string);
	void    setDuration(int);
	void	setStars(vector<string>);
	string  getDirector();
	int     getDuration();
	vector<string> getStars();

	void print(ostream& o);
};