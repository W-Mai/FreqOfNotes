#include "XNotes.h"



XNotes::XNotes(const Freq baseFreq) {
	BASE = baseFreq;
}

XNotes::~XNotes() {}
Freq XNotes::getFreq_rela(const int notes) {
	int tempNote = abs(notes);
	double rtnFreq = BASE;
	for (size_t i = 0; i < tempNote; i++) {
		rtnFreq *= (notes > 0 ? DEGREE : DEGREE_1);
	}
	return Freq(rtnFreq);
}


int XNotes::getDeltaNoteDis(int note, int stage) {
	return 12 * stage + note - 48; // 12 * (stage - 4) + (note - 9)
}

int *XNotes::analyseNote(const char * notes) {
	char N = tolower(notes[0]), P = tolower(notes[1]);
	int * rtn = new int[2];
	if (isalpha(notes[0]) && 'a' <= N && N <= 'g') {
		rtn[0] = GREAT_DEGREE[N - 'a'];
		if (isalpha(notes[1])) {
			rtn[0] += (P == 's' ? 1 : P == 'b' ? -1 : 0);
			if (isdigit(notes[2]) || notes[2] == '-') {
				rtn[1] = atoi(notes + 2);
			} else {
				return nullptr;
			}
		} else if (isdigit(notes[1]) || notes[1] == '-') {
			rtn[1] = atoi(notes + 1);
		} else {
			return nullptr;
		}
		return rtn;
	}
	return nullptr;
}
