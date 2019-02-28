#pragma once

#include "XNotes.h"

class Notes {
private:
	Freq freq;     //频率
	Major M;       //主大调
	Major Partial; //偏移
public:
	Notes();
	Notes(Major m);

	operator Freq();
	Notes operator + (int n);
	Notes operator - (int n);

	~Notes();
};

