#include "XMainHeader.h"

#include <Windows.h>

XNotesManager Notes;

int main() {
	char notes[100];
	int *notes_ana;
	int note, stage;
	double freq;
	while (true) {
		//cin >> note >> stage;
		cin >> notes;
		notes_ana = Notes.analyseNote(notes);
		if (notes_ana) {
			note = notes_ana[0], stage = notes_ana[1];
			freq = Notes.getFreq_rela(Notes.getDeltaNoteDis(note, stage));
			printf("%.2lf\n", freq);
			Beep(freq,1000);
		}
		
	}
}

