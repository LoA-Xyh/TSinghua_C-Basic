#include <iostream>
using namespace std;

int main() {
	char n[9];
	cin >> n;
	int num = 0;
	for (int i = 0; i < 8; i++) {
		if (n[i] != '\0')
			num = n[i]+num*2;
		else
			break;
	}
	cout <<num << endl;
	return 0;
}

