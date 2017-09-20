#pragma once
using namespace std;
#include <fstream>
struct ChoiceData
{
	int choices[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int choiceSize = 10;
};

void ReWriteFile(fstream &file, ChoiceData Choices);