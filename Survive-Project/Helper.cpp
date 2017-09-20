#include "Helper.h"
#include <string>

void ReWriteFile(fstream & file, ChoiceData Choices)
{
	file.open("GameDataSave2.txt");
	int choiceCountTens = 0;
	int choiceCountOnes = 1;

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 1) {
			choiceCountOnes = (choiceCountOnes++ % 2);
		}
		else {
			choiceCountTens++;
		}

		string Idx = "@Choice";
		string IdxNumTens = std::to_string(choiceCountTens);
		string IdxNumOnes = std::to_string(choiceCountOnes);
		string Buffer;
		Idx.append(IdxNumTens); // @Choice11
		Idx.append(IdxNumOnes);
		file << Idx << endl;
		file << Choices.choices[i] << endl;

	}
	file.close();
}

