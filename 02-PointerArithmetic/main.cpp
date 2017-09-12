#include <iostream>
using namespace std;

int main() {
	// Pointer Arithmetic
	/*int a = 1;
	int b = 2;

	int * notA = &a;

	cout << a << endl;
	cout << *(notA+1) << endl;
	system("pause");*/
	// Pointer Arithmetic 2: Electric Boogaloo (arrays)
	int * hArr = new int[2];

	hArr[0] = 1;
	hArr[1] = 2;

	cout << hArr[0] << endl;
	cout << hArr[1] << endl;

	cout << hArr[0] << endl;
	cout << *(hArr+1) << endl;

	int * arrLarge = new int[100];
	int arrLargeStack[100];

	// iteration w/ subscript operator
	for (int i = 0; i < 100; i++) {
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	// iteration w/ pointer arithmetic
	for (int i = 0; i < 100; ++i) {
		cout << *(arrLargeStack + i) << endl;
	}
	
	delete[] hArr;
	system("pause");
	// Type Casting
	float dollars = 1.80f;
	cout << (int)dollars << endl;
	system("pause");

	// closed problems
	// Print an Array of Floats
	float * fArr = new float[4];
	fArr[0] = 1.4f;
	fArr[1] = 5.2f;
	fArr[2] = 9.4f;
	fArr[3] = 2.9f;

	for (int i = 0; i < 4; i++) {
		cout << *(fArr + i) << endl;
	}
	system("pause");
	delete[] fArr;

	// Sum of Integer Array

	int * iArr = new int[4];
	iArr[0] = 9;
	iArr[1] = 4;
	iArr[2] = 12;
	iArr[3] = 3;

	int total = 0;

	for (int i = 0; i < 4; i++) {
		
		total += iArr[i];
	}

	cout << total << endl;
	
	system("pause");
	delete[] iArr;

	// Average of Integer Array
	float * avgArr = new float[5];
	avgArr[0] = 6.0f;
	avgArr[1] = 14.0f;
	avgArr[2] = 3.0f;
	avgArr[3] = 20.0f;

	float total2 = 0;
	float avg = 0.0f;
	for (int i = 0; i < 4; i++) {
		total2 += avgArr[i];
		avg = total2 / 4;
	}
	cout << avg << endl;
	delete[] avgArr;
	system("pause");

	// Open Problems
	//Find Count

}