#include <string>
#include <iostream>
#include "Media.h" 
#include "Music.h"
using namespace std;

Music::Music()
	:Media()
{
	artist = "";
	duration = 0;
}

Music::Music(char type, string t, string a, int r, string g, int p, int yr)
	:Media(type, t, r, yr, g)
{
	artist = a;
	duration = p;
}

string Music::getArtist() { return artist; }
int    Music::getDuration() { return duration; }
void   Music::setArtist(string a) { artist = a; }
void   Music::setDuration(int d) { duration = d; }
void   Music::print() {
	cout << "Song: " << title << " : " << artist << endl;
}
void   Music::print(ostream& o) {
	o << "Song: " << title << " : " << artist << endl;
}
