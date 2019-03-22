#pragma once
#include "XMainHeader.h"

typedef double Freq;
typedef int    Major;

typedef struct Notes {
	char  name[3];
	Major major;
} Notes;



class XNotesManager {
private:
	Freq BASE = 440.00;  // A4
	const double DEGREE = 1.0594630943592953;
	const double DEGREE_1 = 0.9438743126816935;
	const int GREAT_DEGREE[]{ 0, 2, -9, -7, -5, -4, -2 };

	
public:
	int getDeltaNoteDis(int note, int stage);
	int * analyseNote(const char * notes);
	Major getNotes(const Freq freq);
	Freq getFreq_rela(const int notes);
	XNotesManager(const Freq baseFreq = 440.00);
	~XNotesManager();
};

