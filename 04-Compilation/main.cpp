#include<iostream>
using namespace std;

void releaseHalfLove() {
	static int was = 0;
	was++;
	if (was > 2) {
		was = 1;
	}
	cout << "the game, Half-love " << was << " was released" << endl;
	/*if (was == 1) {

	}
	if (was == 2) {

	}
	else {
		was = 1;
	}*/
}

void main() {
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	system("pause");
}