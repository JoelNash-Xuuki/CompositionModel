#ifndef Performer_H
#define Performer_H

#include <string>
#include <vector>

#include "Note.hpp"

using namespace std;

class Performer
{
	public:
	int instrumentNum;
	float space;
	float baseAmp;
	string name;

	Performer(int instrumentNum, float baseAmp, float space, string name);

	string toString();

	string perform(vector<Note> noteList, float startTime);

	string performAleatorically(vector<Note> noteList,
								float timeVariance, 
								float ampVariance, 
								float pitchVariance, 
								float durationOfSection,
								float startTime);
};

#endif
