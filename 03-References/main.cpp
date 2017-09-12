#include<iostream>
#include<string>
using namespace std;

struct Weapon {
	int bluntDamage;
	int magicDamage;
	int bladeDamage;
};

void enhanceWeapon(Weapon& weap) {
	weap.bladeDamage *= 2;
	weap.bluntDamage *= 2;
	weap.magicDamage *= 2;
}

void sum(int a, int b, int& c) {
	c = a + b;
}
// Product of Two Floats (2)
void product(float a, float b, float& c) {
	c = a * b;
}
// Swap (2)
void swap(float& a, float& b, float temp) {
	a = temp;
	a = b;
	b = temp;
}
// Aussiegochi (2)
struct Aussiegochi {
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};
void playWith(Aussiegochi& stats) {
	stats.happiness += 15;
}
void feed(Aussiegochi& stats) {
	stats.hunger += 10;
	stats.happiness += 5;
}
void giveDrink(Aussiegochi& stats) {
	stats.thirst += 10;
}
void pet(Aussiegochi& stats) {
	stats.sanity += 7;
}
// Mixtape (2)
struct track {
	string trackName;
	float playtime;
};
struct playlist {
	string name;	//name of playlist
	track * trackList;		//pointer to array of tracks
	int trackCount;			//number of tracks
};
void printPlaylist(const playlist& pl) {
	cout << pl.name << endl;

	for (int i = 0; i < pl.trackCount; i++) {
		cout << pl.trackList[i].trackName << endl;
		cout << (int)pl.trackList[i].playtime << ":" << endl;
	}
}
//void shufflePlaylist(Playlist& pl);
//void dedupePlaylist(Playlist& pl)

int main() {
	// references
	int hotdog = 10;			// primitive variable
	int& dinosaur = hotdog;		// reference to hotdog
	int* dinosaurPtr = &hotdog;	// pointer to hotdog

	int tacos = hotdog;			// copies the value of hotdog

	hotdog = 15;

	cout << hotdog << endl;
	cout << dinosaur << endl;
	cout << *dinosaurPtr << endl;

	cout << "tacos" << endl;
	cout << tacos << endl;

	// references with functions

	int valA = 1;
	int valB = 2;
	int valC = -1;

	cout << valC << endl;

	sum(valA, valB, valC);

	cout << valC << endl;

	Weapon hammer;
	hammer.bluntDamage = 9001;
	hammer.bladeDamage = 0;
	hammer.magicDamage = 0;

	system("pause");

	//Closed Problems
	// Creating References
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	int& numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;

	// Product of Two Floats (1)
	float num1 = 1.5;
	float num2 = 3;
	float num3 = 0;

	product(num1, num2, num3);
	cout << num3 << endl;

	system("pause");

	//Open Problems
	// Swap (1)
	float nums1 = 1.5f;
	float nums2 = 3.0f;

	swap(nums1, nums2);
	cout << nums1 << endl;
	cout << nums2 << endl;
	system("pause");

	// Aussiegochi (1)
	Aussiegochi stats;
	stats.happiness = 75;
	stats.hunger = 20;
	stats.sanity = 100;
	stats.thirst = 30;
	
	int playerChoice = 0;
	cout << "What do you want to do?" << endl;
	cout << "Happiness: " << stats.happiness << endl;
	cout << "Hunger: " << stats.hunger << endl;
	cout << "sanity: " << stats.sanity << endl;
	cout << "thirst: " << stats.thirst << endl;
	cout << "Press 1 to play with." << endl;
	cout << "Press 2 to feed." << endl;
	cout << "Press 3 to pet." << endl;
	cout << "Press 4 to give it a drink." << endl;
	cin >> playerChoice;

	while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3 && playerChoice != 4) {
		cout << "Please choose one of the four options." << endl;
		cin >> playerChoice;
	}

	if (playerChoice = 1) {
		playWith;
	}
	else if (playerChoice = 2) {
		feed;
	}
	else if (playerChoice = 3) {
		giveDrink;
	}
	else if (playerChoice = 4) {
		pet;
	}
	cout << "Happiness: " << stats.happiness << endl;
	cout << "Hunger: " << stats.hunger << endl;
	cout << "sanity: " << stats.sanity << endl;
	cout << "thirst: " << stats.thirst << endl;
	system("pause");

	//Mixtape
	
	
}