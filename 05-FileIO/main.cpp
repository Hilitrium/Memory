#include<iostream>
#include<fstream>
#include<string>
#include "entity.h"

using namespace std;

using std::string;

using std::fstream;

//my Information
//void main2() {
//
//	string inputBuffer;
//	cout << "where would you like to save this?" << endl;
//	cin >> inputBuffer;
//	
//	fstream profileData;
//	profileData.open(inputBuffer.c_str());
//
//	if (profileData.fail()) {
//		cout << "sorry, we can't save there." << endl;
//		return;
//	}
//
//	
//	cin.ignore(1000, '/n');
//	cout << "who are you?" << endl;
//	getline(std::cin, inputBuffer);
//	profileData << inputBuffer;
//
//	cout << "how old are you?" << endl;
//	getline(std::cin, inputBuffer);
//	profileData << inputBuffer;
//
//	cout << "what's your favorite color?" << endl;
//	getline(std::cin, inputBuffer);
//	profileData << inputBuffer;
//
//	profileData.flush();
//	profileData.close();
//
//	cout << "Thanks" << endl;
//
//	while (true) {}
//}

int main() {

	fstream file;

	file.open("text.txt");
	
	if (file.fail()) {
		std::cout << "File not found." << std::endl;
		return -1;
	}
	//Reading from a File

	string buffer;
	while (std::getline(file, buffer)) {
		// print the line
		std::cout << buffer << std::endl;
	}

	file.clear(); // reset the error flags

	file.seekp(0, std::ios_base::end); // move my cursor to the end

	// write to the file
	// write a message

	file << std::endl << "";

	file.flush();
	file.close();

	// lets create another thing

	fstream autoCreate;

	autoCreate.open("createme.txt", std::ios::out);

	if (autoCreate.fail()) {
		std::cout << "File not found." << std::endl;
		return -1;
	}
	autoCreate.close();

	// Closed Problems
	// Digital Printer

	//while (true)
	//{
	//	std::cout << "greetings, what file would you like to read?" << std::endl;
	//	string commonAnimeTropes;
	//	std::cin >> commonAnimeTropes;
	//	file.open(commonAnimeTropes);

	//	//string commonAnimeTropes;
	//	while (std::getline(file, commonAnimeTropes)) {
	//		std::cout << commonAnimeTropes << std::endl;
	//	}

	//	//if (commonAnimeTropes.()) {
	//	//	std::cout << "File not found." << std::endl;
	//	//	return -1;
	//	//}
	//	//std::cout << "would you like to open anything else?" << std::endl;

	//	if (commonAnimeTropes == "No") {
	//		break;
	//	}
	//}
	/*while (true) {
		cout << "digital printer" << endl;
		string inputBuffer;

		cin >> inputBuffer;
		fstream printer;

		printer.open(inputBuffer);
		if (printer.fail()) {
			cout << "the file you requested could not be found" << endl;
		}

		string fileContents;
		while (std::getline(printer, fileContents)) {
			cout << fileContents << endl;
		}
		file.close();
	}*/
	//main2();
	fstream entityStream;
	entityStream.open("text.txt");

	if (entityStream.fail()) {
		cout << "cant open file" << endl;
	}

	int entityCount = 0;
	Entity entities[100];

	while (true) {
		string buf;
		bool entityFound = false;
		// seek to the next entity
		while (getline(entityStream, buf)) {
			if (buf[0] == '@') { 
				entityFound = true;
				break; 
			}
		}
		// exit if no entity found
		if (!entityFound) { break;}

		// load data into the array of entities
		Entity& curEntity = entities[entityCount];

		getline(entityStream, buf);
		curEntity.hitpoints = stof(buf);
		getline(entityStream, buf);
		curEntity.armor = stof(buf);
		getline(entityStream, buf);
		curEntity.strength = stof(buf);
		getline(entityStream, buf);
		curEntity.defense = stof(buf);
		getline(entityStream, buf);
		curEntity.luck = stof(buf);

		entityCount++;
	}
	while (true) {} // keep the program going
	
}