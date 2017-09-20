#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"Helper.h"
#include<string>
#include"survivePaths.h"
#include"charictorStats.h"
#include"followLibrarian.h"
using namespace std;



int main() {

	//Get Data From File, and store in ChoiceData data
	fstream gameDataStream;
	gameDataStream.open("gameDataSave2.txt", ios_base::out | ios_base::_Nocreate | ios_base::in);

	int TimesChoiceWasMade = 0;
	if (gameDataStream.fail()) {
		cout << "Unable to find game files" << endl;
		
	}

	ChoiceData data;
	fstream File;
	//charictorCreator();
	chapter1(data);


	ReWriteFile(File, data);
	//gameDataStream.flush();
	gameDataStream.close();
}


