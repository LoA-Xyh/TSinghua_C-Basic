#include<iostream>
using namespace std;


int i = 1;
int main() {
	{
		int i = 2;
	}
	static int a[3][4] = { { 1 },{ 0,6 },{ 0,0,11 } };
	cout << i << endl;
	return 0;
}