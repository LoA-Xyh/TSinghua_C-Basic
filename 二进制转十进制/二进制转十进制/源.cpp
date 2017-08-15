#include <iostream>
#include <bitset>
using namespace std;

int main()

{
	bitset<10> binary;
	cin >> binary;
	cout << binary.to_ulong() << endl;

	return 0;
}