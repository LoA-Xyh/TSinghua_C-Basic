#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Equation {
private:
	int _a, _b, _c;
public:
	Equation(int a, int b, int c) {
		_a = a, _b = b, _c = c;
	}
	void solve() {
		double a = _a, b = _b, c = _c;
		if (a ==0&&b!=0) {
			double x1 = -c / b;
			cout << 6 << endl;
			cout << fixed << setprecision(2) << x1 << endl;
		}
		else if (a == 0&&b == 0&&c!=0) {
			cout << 4 << endl;
		}
		else if (a == 0 && b == 0 && c == 0) {
			cout << 5 << endl;
		}
		else {
			int det = pow(b, 2) - 4 * a*c;
			if (det < 0)
				cout << 3 << endl;
			else if (det == 0) {
				double x1 =-b / (2 * a);
				cout << 2 << endl;
				cout << fixed << setprecision(2) << x1 << endl;
			}
			else if (det > 0) {
				double x1, x2;
				x1 = (-b + sqrt(det)) / (2 * a);
				x2 = (-b - sqrt(det)) / (2 * a);
				double temp;
				if (x1 > x2) {
					temp = x1;
					x1 = x2;
					x2 = temp;
				}
				cout << 1 << endl;
				cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
			}
		}
	}
};
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
	return 0;
}