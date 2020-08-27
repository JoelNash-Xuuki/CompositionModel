#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

#include "Note.h"
#include "Performer.h"
#include "PerformerGroup.h"

//Heres a comment to test git


int main()
{
	srand( (unsigned)time( NULL ) );

	Performer a1(1, 0.997, -.3, "Performer A1");
	Performer a2(1, 1.0, 0.0, "Performer A2");
	Performer a3(1, .997, .3, "Performer A3");

	PerformerGroup groupA("Group A");
	groupA.performers.push_back(&a1);
	groupA.performers.push_back(&a2);
	groupA.performers.push_back(&a3);

	Performer b1(1, 1.0, -.2, "Performer B1");
	Performer b2(1, 0.95, -.15, "Performer B2");
	Performer b3(1, 0.9, -.1, "Performer B3");

	PerformerGroup groupB("Group B");
	groupB.performers.push_back(&b1);
    groupB.performers.push_back(&b2);
    groupB.performers.push_back(&b3);

	Performer c1(1, 1.0, .2, "Performer C1");
	Performer c2(1, 0.95, .15, "Performer C2");
	Performer c3(1, 0.9, .1, "Performer C3");

	PerformerGroup groupC("Group C");
	groupC.performers.push_back(&c1);
    groupC.performers.push_back(&c2);
    groupC.performers.push_back(&c3);

	Performer d1(1, 1.0, -.1, "Performer D1");
	Performer d2(1, 0.95, 0.0, "Performer D2");
	Performer d3(1, 0.9, .1, "Performer D3");

	PerformerGroup groupD("Group D");
	groupD.performers.push_back(&d1);
    groupD.performers.push_back(&d2);
    groupD.performers.push_back(&d3);

	Note direct(0, 1, 8.00, 8.00, 80, 0);
	Note directCopy = direct;
	directCopy.startTime = 1.00;
	directCopy.pitch1 = 9.00;
	directCopy.pitch2 = 9.00;
	cout << direct.getNote(1, 0.0) << endl;
	cout << directCopy.getNote(1, 0.0) << endl;

	Note a (0, 1, 8.00, 8.00, 80, 0);
	vector<Note> noteList;
	noteList.push_back(a);
	noteList.push_back(Note(1, 1, 8.04, 8.04, 80, 0));
	noteList.push_back(Note(2, 1, 8.07, 8.07, 80, 0));
	noteList.push_back(Note(3, 1, 8.07, 8.37, 80, 0));
	noteList.push_back(Note(0, 3));

	cout << ";Begin Orchestra Output" << endl << endl;
	cout << ";Testing Note" << endl;
	cout << a.getNote(1, 0.0) << endl;
	cout << endl << ";Testing Performers" << endl;

	cout << a1.toString() << endl;
	cout << a1.perform(noteList, 5.00) << endl;

	cout << a2.toString() << endl;
	cout << a2.perform(noteList, 10.0);

	cout << a3.toString() << endl;
	cout << a3.perform(noteList, 15.0);

	cout << endl << ";Testing Performer Group" << endl << endl;
	cout << groupA.toString() << endl;
	cout << groupA.perform(noteList, 20.0) << endl;

	vector<Note> harmonyPart1;
	vector<Note> harmonyPart2;
	vector<Note> harmonyPart3;
	vector<Note> harmonyPart4;

	harmonyPart1.push_back(Note(0, 1, 9.00, 9.00, 80, 0));
	harmonyPart1.push_back(Note(1, 1, 9.00, 9.00, 80, 0));
	harmonyPart1.push_back(Note(2, 1, 9.02, 9.02, 80, 0));
	harmonyPart1.push_back(Note(4, 1, 9.00, 9.00, 80, 0));

    harmonyPart2.push_back(Note(0, 1, 8.04, 8.04, 80, 0));
    harmonyPart2.push_back(Note(1, 1, 8.05, 8.05, 80, 0));
    harmonyPart2.push_back(Note(2, 1, 8.05, 8.05, 80, 0));
    harmonyPart2.push_back(Note(4, 1, 8.04, 8.04, 80, 0));

    harmonyPart3.push_back(Note(0, 1, 7.04, 7.04, 80, 0));
    harmonyPart3.push_back(Note(1, 1, 7.05, 7.05, 80, 0));
    harmonyPart3.push_back(Note(2, 1, 7.05, 7.05, 80, 0));
    harmonyPart3.push_back(Note(4, 1, 7.04, 7.04, 80, 0));

	harmonyPart4.push_back(Note(0, 1, 7.04, 7.04, 80, 0));
    harmonyPart4.push_back(Note(1, 1, 6.05, 6.05, 80, 0));
    harmonyPart4.push_back(Note(2, 1, 6.07, 6.07, 80, 0));
    harmonyPart4.push_back(Note(4, 1, 7.00, 7.00, 80, 0));

	cout << endl << ";Four-Part Harmony - One per part" << endl;
	cout << groupA.performers[0]->perform(harmonyPart1, 25) << endl;
	cout << groupB.performers[0]->perform(harmonyPart2, 25) << endl;
	cout << groupC.performers[0]->perform(harmonyPart3, 25) << endl;
    cout << groupD.performers[0]->perform(harmonyPart4, 25) << endl;

	cout << endl << ";Four-Part Harmony - Group per part" << endl;
	cout << groupA.perform(harmonyPart1, 32) << endl;
	cout << groupB.perform(harmonyPart2, 32) << endl;
	cout << groupC.perform(harmonyPart3, 32) << endl;
	cout << groupD.perform(harmonyPart4, 32) << endl;

	vector<Note> alea1;
	vector<Note> alea2;
	vector<Note> alea3;
	vector<Note> alea4;

	alea1.push_back(Note(0, 3, 10.08, 10.07, 70, 1));
	alea1.push_back(Note(4, 4.3, 10.09, 10.06, 70, 1));
	alea1.push_back(Note(8, 4, 10.085, 10.065, 70, 1));
	alea1.push_back(Note(0, 3));

	alea2.push_back(Note(0, 2, 8.04, 8.04, 76, 1)); 
    alea2.push_back(Note(2, 2, 8.05, 8.05, 76, 1));
    alea2.push_back(Note(4, 2, 8.06, 8.06, 76, 1));
	alea2.push_back(Note(6, 2, 8.05, 8.05, 76, 1));
    alea2.push_back(Note(6, 3));

	alea3.push_back(Note(0, 4, 7.10, 7.11, 75, 2));
    alea3.push_back(Note(5, 4.3, 7.095, 7.115, 75, 2));
    alea3.push_back(Note(10, 4, 7.105, 7.11, 75, 2));
    alea3.push_back(Note(0, 3));

	alea4.push_back(Note(0, 4, 7.02, 7.01, 77, 2));
	alea4.push_back(Note(4, 3.3, 7.03, 7.015, 77, 2));
	alea4.push_back(Note(8, 3.6, 7.025, 7.015, 77, 2));
	alea4.push_back(Note(0, 3));

	cout << endl << ";Testing PerformAleatorically Method" << endl;
	cout << groupA.performAleatorically(alea1, 0.3, 0.1, .2, 35, 55)
		 << endl;
	cout << groupB.performAleatorically(alea2, 0.2, 0.02, .02, 50, 50) 
		<< endl;
	cout << groupC.performAleatorically(alea3, 0.2, 0.02, .02, 55, 45) 
		<< endl;
	cout << groupD.performAleatorically(alea4, 0.1, .05, .05, 60, 40) 
		<< endl;

	cout << endl << ";Testing PerformSurface Method" << endl;

	cout << groupA.performSurface(80, 1, 150.0, 9.10, 150.5, 10.04,
			162.0, 10.01, 162.5, 10.01) << endl;

	cout << groupB.performSurface(80, 1, 135.0, 8.00, 135.5, 8.05,
			150.0, 9.00, 149.5, 7.07) << endl;

	cout << groupC.performSurface(80, 1, 145.0, 8.03, 145.5, 8.03,
			160.0, 7.11, 159.5, 8.08) << endl;

	cout << groupD.performSurface(80, 1, 135.0, 6.00, 135.5, 6.02,
			160.0, 7.00, 159.5, 7.04) << endl;

	cout << endl << ";End Orchestra Output" << endl;

	return 0;
}

