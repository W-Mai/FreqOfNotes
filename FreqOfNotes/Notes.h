#pragma once

#include "XNotes.h"

class Notes {
private:
	Freq freq;     //Ƶ��
	Major M;       //�����
	Major Partial; //ƫ��
public:
	Notes();
	Notes(Major m);

	operator Freq();
	Notes operator + (int n);
	Notes operator - (int n);

	~Notes();
};

