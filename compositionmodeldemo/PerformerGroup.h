#ifndef PerformerGroup_H
#define PerformerGroup_H

class PerformerGroup{
	public:
		string name;
		// uses ponters so that different groups may share references
		// to the same Performers
		vector<Performer *> performers;

		PerformerGroup(string name);

		string toString();

		string perform(vector<Note> noteList, float startTime);

		string performAleatorically(vector<Note> noteList,
				float timeVariance, float ampVariance,
				float pitchVariance,float durationOfSection,
				float startRange);

		string performSurface(float amp, int envType,
							float time1a, float pch1a,
							float time1b, float pch1b,
							float time2a, float pch2a,
							float time2b, float pch2b);
};

#endif
