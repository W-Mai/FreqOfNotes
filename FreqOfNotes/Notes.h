#pragma once

#include "XNotes.h"

class Notes {
private:
	Freq freq;     //频率
	Major M;       //主大调
	Major Partial; //偏移
	GETTINGMODE Mode = FREQMODE; //获取模式
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

