#pragma once
#include"stayWithLibrarian.h"
#include"choiceStats.h"
using namespace std;

void chapter1() {


	int choice1 = 0;
	cout << "You are onboard a Battle Barge in the command station, you are tasked with the " << endl;
	cout << "protection of the Librarian during the upcomming crusade. You just recently left " << endl;
	cout << "orbet from your homeworld on a direct rout towrds a necron tomb world with the " << endl;
	cout << "intent of destroying the sleeping world before it has a chance to awaken. " << endl;
	cout << "your fleet is preparing to warp to the planet and all the other " << endl;
	cout << "marines are preparing for the assault when you arrive." << endl;
	system("pause");
	system("cls");
	cout << "But before you are able to enter the warp the sensors on your ship begin to " << endl;
	cout << "pick up a strange annomily nearby. The librarian immiditly commands the crew " << endl;
	cout << "to figure out what it is, however shortly you begin to investigate what it is " << endl;
	cout << "a large ship allongside several smaller ships appear from the location of the " << endl;
	cout << "annomily. You are unable to recognize the ship type of the largest one, you are " << endl;
	cout << "able to recognize the smaller ships, they are all ships of the Necron fleets." << endl;
	cout << "Even the Librarian is not able to recognize the large ship. Whatever it is, it " << endl;
	cout << "incredibly rare and can only mean something bad is about to happen." << endl;
	system("pause");
	system("cls");
	cout << "The large ship has only four escorts, there are two Dirge Class Harvest Ships,	" << endl;
	cout << "and two Jackel Class Raiders. Your crew begins scrambiling for battle and the " << endl;
	cout << "other marines onboard go to their assault pods to prepair for a boarding process." << endl;
	cout << "You can go to your assault pod or stay with the librarian to defend him." << endl;
	cout << "Press '1' to go to your assault pod, or Press '2' to stay with the librarian." << endl;
	cin >> choice1;
	while (choice1 != 1 && choice1 != 2) {
		cout << "please only use the corrisponding numbers." << endl;
		cin >> choice1;
	}
	if (choice1 = 1) {
		stayWLibrarian();

		int choiceCount = 11;
		Choice choices[100];

		string Idx = "@Choice";
		string IdxNum = std::to_string(choiceCount);
		string Buffer;
		Idx.append(IdxNum); // @Choice11

		//SEARCHING FOR OUR CHOICE
	


		fstream gameDataStream;
		gameDataStream.open("gameDataSave2.txt", ios_base::out | ios_base::_Nocreate);


		while (getline(gameDataStream, Buffer))
		{
			if (Idx == Buffer)
			{
				break; // @Choice52
			}
		}
		//gameDataStream << <<endl
		getline(gameDataStream, Buffer); // 0
		int TimesChoiceWasMade = stoi(Buffer);

		if (gameDataStream.fail()) {
			cout << "Unable to find game files" << endl;
			
		}
		
		gameDataStream.close();

	}

	if (choice1 = 2) {
		cout << "this part of the story is not yet complete, this is just a message to make sure it workes." << endl;
	}

	/*fstream gameDataStream;
	gameDataStream.open("gameDataSave.txt");

	if (gameDataStream.fail()) {
		cout << "Unable to find game files" << endl;
	}*/

	system("pause");
};