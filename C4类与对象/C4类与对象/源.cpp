#include <iostream>
using namespace std;
class Integer {
private:
	int _num;
public:
	//���캯��
	Integer(int num) {
		_num = num;
	}
	//���㵱ǰInteger �� b֮������Լ��
	int gcd(Integer b) {
		int aTemp = _num;
		int bTemp = b._num;
		if (aTemp > bTemp) {
			for (; bTemp >= 1; bTemp--) {
				if (_num %bTemp == 0&&b._num%bTemp==0)
					return bTemp;
			}
		}
		else 
			for (; aTemp >= 1; aTemp--) {
			if (b._num %aTemp == 0&&_num%aTemp==0)
				return aTemp;
		}
	}
};
int main() {
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	return 0;
}