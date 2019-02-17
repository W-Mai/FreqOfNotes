#pragma once

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <string>

const double BASE = 440.00;  // A4
const double DEGREE = 1.0594630943592953;
const double DEGREE_1 = 0.9438743126816935;
const int GREAT_DEGREE[]{ 0, 2, -9, -7, -5, -4, -2 };



using namespace std;

double getFreq(const int note);
int getDeltaNoteDis(int note, int stage);
int * analyseNote(const char * notes);