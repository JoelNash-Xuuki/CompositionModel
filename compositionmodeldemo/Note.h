#ifndef Note_H
#define Note_H

class Note {
	public:
		float startTime;
		float duration;
		float pitch1;
		float pitch2;
		float amp;
		int envType;
		bool isRest;
		
		// This constructor donotes a "sounding note".
		Note(float startTime, float duration, float pitch,
				float pitch2, float amp, int envType);

		// This constructor is used to denote a Rest note.
		// and sets isRest to true.
		Note(float startTime, float duration);

		// used as output into the SCO file to but used by Csound.
		// it will be used by the performer class to facilitate 
		// a performance of that note.
		std::string getNote(int instrumentNum, float space);
};

#endif
