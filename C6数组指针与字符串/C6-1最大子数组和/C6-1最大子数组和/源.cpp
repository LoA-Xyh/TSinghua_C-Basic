#include <iostream>
using namespace std;

int main() {
	int sumNum;
	cin >> sumNum;
	int a[5000] = { 0 }, b[5000] = { 0 };
	for (int i = 0; i < sumNum; i++)
		cin >> a[i];
	for (int i = 0, temp = 0,arr=0; i < sumNum; i++) {
		temp += a[i];
		if (temp > b[arr]) {
			b[arr] = temp;
		}
		if (temp <= 0) {
			temp = 0;
			arr += 1;
			i = arr;
		}
	}
	int maxArray = 0;
	for (int i = 0; i < sumNum; i++) {
		if (b[i] > maxArray)
			maxArray = b[i];
	}
	cout << maxArray << endl;
	return 0;
}