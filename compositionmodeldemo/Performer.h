#ifndef Performer_H
#define Performer_H

//Heres a comment to test git :)

class Performer
{
	public:
	string name;
	int instrumentNum;
	float space;
	float baseAmp;

	Performer(int instrumentNum, float baseAmp, float space,
			string name);

	string toString();

	string perform(vector<Note> noteList, float startTime);

	string performAleatorically(vector<Note> noteList,
			float timeVariance, float ampVariance, 
			float pitchVariance, float durationOfSection,
			float startTime);
};

Performer::Performer(int, float, float, string)


#endif
