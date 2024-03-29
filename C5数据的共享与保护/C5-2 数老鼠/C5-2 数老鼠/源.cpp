#include <iostream>
using namespace std;

class Mouse {

public:
	static int num;
	Mouse() {
		num += 1;
	}
	Mouse(const Mouse&mouse) {
		num += 1;
	}
	~Mouse(){
		num -= 1;
	}
};
int Mouse::num;
void fn(Mouse m);

int main()
{
	Mouse::num = 0;
	Mouse a;
	cout << Mouse::num << endl;
	Mouse b(a);
	cout << Mouse::num << endl;
	for (int i = 0; i < 10; ++i)
	{
		Mouse x;
		cout << Mouse::num << endl;
	}
	fn(a);
	cout << Mouse::num << endl;
	return 0;
}

void fn(Mouse m)
{
	cout << Mouse::num << endl;
	Mouse n(m);
	cout << Mouse::num << endl;
}