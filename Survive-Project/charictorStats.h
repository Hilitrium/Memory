#pragma once
using namespace std;

	struct primarisMarine {
		int ST;
		int WH;
		int AG;
	};
	static int plStatsST = 0;
	static int plStatsAG = 0;
	static int plStatsWH = 0;
int charictorCreator() {
	//intro screen
	cout << "welcome to The Shard - Warhammer 40k. During this game you will be prompted to input	" << endl;
	cout << "either a number or letters, please only input the options you are given. In the next screen you " << endl;
	cout << "will be able to name and create your charictor." << endl;
	cout << "---------------Press any key to continue---------------" << endl;
	char name[50];
	cout << "Please name your Primaris Marine." << endl;
	cin.getline(name, 50);

	//Charictor creator
	while (true) {
		void charictorCreatorStats(); {
			system("cls");
			int sT = 0;
			int aG = 0;
			int wH = 0;
			primarisMarine player;
			cout << "Greetings " << name << ", ";
			cout << "you have 9 points to spend between your strength, weapon handling, and your agility. " << endl;
			cout << "you will also be able to equip your chosen weapons which will effect your stats." << endl;
			cout << "Set your strength." << endl;
			cin >> player.ST;
			sT = player.ST;
			cout << "set your weapon handling." << endl;
			cin >> player.WH;
			wH = player.WH;
			cout << "set your agility." << endl;
			cin >> player.AG;
			aG = player.AG;

			if (sT + aG + wH == 9) {
				plStatsAG = aG;
				plStatsST = sT;
				plStatsWH = wH;
				break;
			}
			else {
				cout << "please use exactly 9 skill points." << endl;
			}
			system("pause");
		}
	}

	//Player weapon choice
	int playerInput1 = 0;
	cout << "Now choose what weapons you will be bringing with you, the weapons you choose will " << endl;
	cout << "affect your stats. You will choose your ranged weapon then your melee weapon." << endl;
	cout << "The avalible ranged weapons are the Assault bolter, the Stalker bolter, and the " << endl;
	cout << "Plasma exterminator." << endl;
	cout << "The assault bolter will increase your strength while decrecresing your weapon handling." << endl;
	cout << "The Stalker bolter will increase your weapon handling while decreasing your strength" << endl;
	cout << "The plasma will only increase your strength, however it won't be as big of a boost." << endl;
	cout << "Press '1' for the Assault bolter, Press '2' for the Stalker bolter, or press '3' for" << endl;
	cout << "the Plasma exterminator." << endl;
	while (playerInput1 != 1 && playerInput1 != 2 && playerInput1 != 3) {
		cout << "Please only input the numbers specified for the weapons." << endl;
		cin >> playerInput1;
	}
	if (playerInput1 == 1) {
		plStatsST += 3;
		plStatsWH -= 2;
	}
	else if (playerInput1 == 2) {
		plStatsST -= 1;
		plStatsWH += 3;
	}
	else if (playerInput1 == 3) {
		plStatsST += 2;
	}
	cout << "your new Strength stat is " << plStatsST << endl;
	cout << "your new Agility stat is " << plStatsAG << endl;
	cout << "your new Weapon Handiling stat is " << plStatsWH << endl;

	int playerInput2 = 0;
	cout << "The avalible melee weapons avalible are the Power fist, the Chain sword, and the " << endl;
	cout << "Lightning claws." << endl;
	cout << "The Power fist will increase your strength while decreasing your agility." << endl;
	cout << "The Chain sword will slightly increase your strength while leaving your other stats alone." << endl;
	cout << "The Lightning claws will increase your agility while decreasing your strength." << endl;
	cout << "Press '1' for the Power fist, Press '2' for the Chain sword, or Press '3' for the Lightning claws." << endl;
	while (playerInput2 != 1 && playerInput2 != 2 && playerInput2 != 3) {
		cout << "Please only input the numbers specified for the weapons." << endl;
		cin >> playerInput2;
	}
	if (playerInput2 == 1) {
		plStatsST += 3;
		plStatsAG -= 2;
	}
	else if (playerInput2 == 2) {
		plStatsST += 1;
	}
	else if (playerInput2 == 3) {
		plStatsAG += 3;
		plStatsST -= 2;
	}
	cout << "your final Strength stat is " << plStatsST << endl;
	cout << "your final Agility stat is " << plStatsAG << endl;
	cout << "your final Weapon Handiling stat is " << plStatsWH << endl;

	system("pause");
	system("cls");

	return plStatsAG;
	return plStatsST;
	return plStatsWH;
}