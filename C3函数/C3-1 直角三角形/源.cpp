#include <iostream>
using namespace std;
bool triangle(int a, int b, int c) {
	int longest = a;
	if (longest > b);
	else longest = b;
	if (longest > c);
	else longest = c;
	return longest*longest * 2 == a*a + b*b + c*c;
}

int main() {
	int a, b, c = 0;
	while (cin >> a >> b >> c) {
		bool zjTri = triangle(a, b, c);
		if (zjTri == true) {
			cout << "True" << endl;
		}
		else cout << "False" << endl;
	}
	return 0;
}