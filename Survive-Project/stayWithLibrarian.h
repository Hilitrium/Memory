#pragma once
#include"escapePods.h"
using namespace std;

void stayWLibrarian() {
	int choice2 = 0;
	system("cls");
	cout << "You decide it will be better to stay alongside the Librarian." << endl;
	cout << "The other ships in your fleet are already beginning their assault " << endl;
	cout << "on the Necron ship. Suddenly you feel a strong surge of energy " << endl;
	cout << "emanating from the Necron ship. Your ship, the Librarian, and yourself " << endl;
	cout << "are unnefected by whatever it was. But the other men seem paralized with " << endl;
	cout << "fear, they all start screaming wildly and thrashing about. \"Get back to " << endl;
	cout << "your stations you pathetic cowards!\" the librarian yess to the panicking " << endl;
	cout << "crew. The crew compleatly ignors the order and are beginning to destroy " << endl;
	cout << "and kill everything around them. Whatever the energy pulse did to them " << endl;
	cout << "they are no longer sane and should be considered hostile. The librarian " << endl;
	cout << "begins to kill them to try and keep them from damaging anything important." << endl;
	system("pause");
	system("cls");
	cout << "Soon after you and the librarian kill the entire bridge crew alarms begin to sound " << endl;
	cout << "that indicate that the plasma engine has been comprimised. If it were to go critical " << endl;
	cout << "it will kill everyone onboard and a majority of your fleet." << endl;
	cout << endl;
	cout << "If you want to go to the escape pods and go back down to your homeworld " << endl;
	cout << "to prepare for a fight Press '1'. If you want to go to the engine room to " << endl;
	cout << "try and prevent a critical meltdown Press '2'." << endl;
	cin >> choice2;
	while (choice2 != 1 && choice2 != 2) {
		cout << "Please only use the corrisponding numbers.";
		cin >> choice2;
	}
	if (choice2 = 1) {
		escapePods();
	}
	else if (choice2 = 2){
		cout << "this choice does not work yet." << endl;
		system("pause");
	}
}
