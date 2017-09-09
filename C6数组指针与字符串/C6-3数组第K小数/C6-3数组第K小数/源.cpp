#include <iostream>
using namespace std;

void numOrder(int *numTop, int *numButtom);
	
int main() {
	int n, k;
	cin >> n >> k;
	int *numArr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> numArr[i];
	}

	for (int i = 0; i < n; i++) {
		numOrder(numArr + i, numArr + n - 1);
	}

	cout << numArr[k-1] <<endl ;
	delete[] numArr;
	return 0;
}

void numOrder(int *numTop, int *numButtom) {
	if (numTop == numButtom);
	else if (numTop + 1 == numButtom) {
		int numTemp = *(numTop);
		if (numTemp > *(numButtom)) {
			*(numTop) = *(numButtom);
			*(numButtom) = numTemp;
		}
	}
	else {
		numOrder(numTop, numButtom - 1);
		int numTemp = *(numTop);
		if (numTemp > *(numButtom)) {
			*(numTop) = *(numButtom);
			*(numButtom) = numTemp;
		}
	}
}