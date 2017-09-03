#include<iostream>
using namespace std;


int i = 1;
int main() {
	{
		int i = 2;
	}
	cout << i << endl;
	return 0;
}