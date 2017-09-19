#pragma once
#include"followLibrarian.h"
using namespace std;

void escapePods() {
	int choice3 = 0;
	system("cls");
	cout << "You and the Librarian decide it would be a good idea to get to the " << endl;
	cout << "escape pods and go back to your homeworld in order to prepare for " << endl;
	cout << "the innevitable Necron assault. Soon after your pod ejects from the ship " << endl;
	cout << "the engine goes critical, destroying it and a majority of the rest of your " << endl;
	cout << "fleet, the only ships that survived were two Cobra class and one Firestorm " << endl;
	cout << "class ships. However they appear to have stopped their assaults on the Necron " << endl;
	cout << "force. They are just sitting there, the energy pulse from earler must of affected " << endl;
	cout << "them as well. after about ten minutes of flight you crash-land back on your homeworld " << endl;
	cout << "a quarter kilometer away from your homebase. When you make it back to your base " << endl;
	cout << "it is already under attack by the necrons. The other marines are fighting back " << endl;
	cout << "with all their might to fend off this carnage. But you notice something strange " << endl;
	cout << "about these Necrons, they all seem to be twisted gore covered versions of what	" << endl;
	cout << "you remember a necron to look like. They are covered head to toe with blood and " << endl;
	cout << "flesh, their hands are twisted serrated blades. Some of them appear to be attempting " << endl;
	cout << "to consume your fallen brothers." << endl;
	system("pause");
	system("cls");
	cout << "In the distance you can see a Necron Overlord commanding the battle, the overlord " << endl;
	cout << "is also diffrent. Insted of the normal staff they carry, this one holds a scythe, " << endl;
	cout << "its left hand is also twisted out of shape into a claw like hand. It rides a wave of " << endl;
	cout << "scarabs insted of walking, the scarabs are consuming any fallen necron they come across. " << endl;
	cout << "Strangly there is another lord standing in the far back of the battle, this one is " << endl;
	cout << "diffrent from the other attackers, it looks like a normal Necron lord. The Librarian " << endl;
	cout << "immiditly recognized the lord \"If you value your life, use caution when facing that lord." << endl;
	cout << "many men have fallen to him.\"he tells you. You ask who the lord is and " << endl;
	cout << "the Librarian replies \"His name is Trazyn, his only drive is to collect and preserve " << endl;
	cout << "relics and technologies. So if he is here that can only mean we found something " << endl;
	cout << "incredibly powerfull, we must get to the arcives and stop him from collecting " << endl;
	cout << "what he is searching for.\"" << endl;
	cout << "if you want to follow the Librarian and go to the archives Press '1', " << endl;
	cout << "if you want to go into battle to stop trazyn before he gets to the arcive Press '2'." << endl;
	cin >> choice3;
	while (choice3 != 1 && choice3 != 2) {
		cout << "Please only use the corrisponding numbers.";
		cin >> choice3;
	}
	if (choice3 = 1) {
		followLibrarian();
	}
	else if (choice3 = 2) {
		cout << "sorry but this part of the story does not exist yet.";
		system("pause");
	}
}
