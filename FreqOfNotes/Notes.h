#pragma once

#include "XNotes.h"

class Notes {
private:
	Freq freq;     //Ƶ��
	Major M;       //�����
	Major Partial; //ƫ��
	GETTINGMODE Mode = FREQMODE; //��ȡģʽ
public:
	Notes();
	Notes(Major m);
	void setMode(GETTINGMODE mode);
	Freq getFreq();


	operator Freq();
	Notes operator + (int n);  
	Notes operator - (int n);
	
	~Notes();  
};

