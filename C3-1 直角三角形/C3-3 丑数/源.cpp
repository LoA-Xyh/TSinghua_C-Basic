#include <iostream>
using namespace std;

bool uglyNum(int n) {
	while (n % 2 == 0)
		n /= 2;
	while (n % 3 == 0)
		n /= 3;
	while (n % 5 == 0)
		n /= 5;
	if (n == 1)
		return true;
	else 
		return false;
}

int main() {
	int n;
	while (cin >> n) {
		if (uglyNum(n) == true)
			cout << "True" << endl;
		else cout << "False" << endl;
	}
	return 0;
}