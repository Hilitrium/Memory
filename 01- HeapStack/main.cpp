#include <iostream>
using namespace std;

	//Example Program
//int sumTwoIntPtrs(int * a, int * b) {
//	return *a + *b;
//}
	int diff(int * numA, int * numB) {
	return *numA - *numB;
}
	void arrayMultiple(int * numA, int size) {
		for (int i = 0; i < size; i++)
		{
			numA[i] = i * 3;
			cout << numA[i] << endl;
		}
	}
	void printNums(int * numA, int size) {
		for (int i = 0; i < size; i++) {
			numA[i] = i + 1;
			cout << numA[i] << endl;
		}
	}

	//void userNuMs(int * numA, int size){}
int main() {
	////instantiate two pointers to heap-allocated integers
	//int * numAPtr = new int(10);
	//int * numBPtr = new int(15);

	//cout << "numA: " << *numAPtr << endl;
	//cout << "numB: " << *numBPtr << endl;

	////provide them as args
	//int res = sumTwoIntPtrs(numAPtr, numBPtr);

	//system("pause");
	//delete numAPtr;
	//delete numBPtr;

	//return 0;
	//closed problems
	//Heap Allocated Objects
	int * wholeNum = new int(1);
	float * wholeFLT = new float(1.0f);
	bool * aBool = new bool(true);

	int * wholeNums = new int[5];
	float * wholeFLTs = new float[5];
	bool * theBooleans = new bool[5];

	delete wholeNum;
	delete wholeFLT;
	delete aBool;

	delete[] wholeNums;
	delete[] wholeFLTs;
	delete[] theBooleans;

	//Subtracting Heap Allocated Numbers
	int * a = new int(4);
	int * b = new int(4);

	int res = diff(a, b);
	cout << res << endl;
	
	//system("pause");
	
	delete a;
	delete b;

	//Heap Allocated Integer Array
	int * numbers = new int[100];

	for (int i = 0; i < 100; ++i) {
		numbers[i] = i+1;
	}
	for (int i = 0; i < 100; ++i) {
		cout << numbers[i] << endl;
	}
	system("pause");
	//open problems
	// Populating an array From 1 to X (Function)
	int * numBers = new int[100];
	
	arrayMultiple(numBers, 100);
	delete numBers;
	
	
	/*int userinp = 0;
	cin >> userinp;
	for (int i = 0; i < userinp; ++i) {
		int num = arrayMultiple(userinp);*/
		/*int space = 3;
		numBers[i] = space + 3;
		cout << space << endl;*/
	system("pause");
	
	//Printing a Heap-Allocated Integer Array
	int *intarray = new int[8];
	printNums(intarray, 8);
	system("pause");
	delete intarray;
	// Heap-Allocated Array of Numbers
	//ask for numbers
	cout << "how many?" << endl;
	int qty = 0;
	cin >> qty;
	int * inputs = new int[qty];
	for (int i = 0; i < qty; ++i) {
		cout << "what's number " << i + 1 << "?" << endl;
		
		int input = -1;
		cin >> input;

		inputs[i] = input;
	}
	// determine odds n' evens
	int evens = 0;
	for (int i = 0; i < qty; ++i) {
		if (inputs[i] % 2 == 0) { evens++; }
	}
	int odds = qty + 1 - evens;
	if (evens > odds) {
		cout << "even";
	}
	else if (odds > evens) {
		cout << "odds";
	}
	else {
		cout << "equal";
	}
	delete[] inputs;
	int *userNums = new int[100];
	system("pause");

	// adding up to 21

	cout << "how many?" << endl;
	int count = 0;
	cin >> count;

	int * numberz = new int[count];

	for (int i = 0; i < count; i++) {
		cout << "okay, whats num " << i + 1 << "?" << endl;

		int userInput = 0;
		cin >> userInput;

		numberz[i] = userInput;
	}
	int total = 0;
	for (int i = 0; i < count; i++) {
		total += numberz[i];
	}
	if (total == 21) {
		cout << "you can add after all" << endl;
	}
	else {
		cout << "Have you considered taking math classes?" << endl;
	}
	system("pause");
	delete[] numberz;

}

