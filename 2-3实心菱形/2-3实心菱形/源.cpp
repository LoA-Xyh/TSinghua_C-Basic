#include <iostream>
using namespace std;

int main() {
	int floor = 0;
	cin >> floor;

	for (int sFloor = floor-1; sFloor >= 0; sFloor--) {
		for (int fSpace = 1; fSpace <= sFloor; fSpace++) {
			cout << " ";
		}
		for (int sign = 2 * (floor - sFloor) -1; sign > 0;sign--) {
			cout << "*";
		}
		for (int bSpace = 1; bSpace <= floor; bSpace++) {
			cout << " ";
		}
		cout << endl;
	}
	//´òÓ¡µ½µÚN²ã
	for (int sFloor = floor - 1; sFloor > 0; sFloor--) {
		for (int fSpace = floor; fSpace > sFloor; fSpace--) {
			cout << " ";
		}
		for (int sign = 2 * (sFloor)-1; sign > 0; sign--) {
			cout << "*";
		}
		for (int bSpace = floor; bSpace > sFloor; bSpace--) {
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}