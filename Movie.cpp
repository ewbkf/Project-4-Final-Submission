#include <string>
#include <iostream>
#include "Media.h" 
#include "Movie.h"
using namespace std;

Movie::Movie()
	:Media()
{
	director = " ";
	duration = 0;
	stars = {};
}

Movie::Movie(char type, string t, string a, int r, string g, int d, int yr, vector<string> s)
	: Media(type, t, r, yr, g)
{
	director = a;
	duration = d;
	stars = s;
}

string			Movie::getDirector() { return director; }
int				Movie::getDuration() { return duration; }
vector<string>	Movie::getStars() { return stars; }
void			Movie::setDirector(string a) { director = a; }
void			Movie::setDuration(int p) { duration = p; }
void			Movie::setStars(vector<string> v) { stars = v; }
void			Movie::print(ostream& o) {
	o << "Movie: " << title << " : " << director << endl;
}