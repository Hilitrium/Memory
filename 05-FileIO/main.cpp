#include<iostream>
#include<fstream>
#include<string>

using std::string;

using std::fstream;


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

	while (true)
	{
		std::cout << "greetings, what file would you like to read?" << std::endl;
		string commonAnimeTropes;
		std::cin >> commonAnimeTropes;
		file.open(commonAnimeTropes);

		//string commonAnimeTropes;
		while (std::getline(file, commonAnimeTropes)) {
			std::cout << commonAnimeTropes << std::endl;
		}

		//if (commonAnimeTropes.()) {
		//	std::cout << "File not found." << std::endl;
		//	return -1;
		//}
		//std::cout << "would you like to open anything else?" << std::endl;

		if (commonAnimeTropes == "No") {
			break;
		}
	}
	

	while (true) {} // keep the program going
}