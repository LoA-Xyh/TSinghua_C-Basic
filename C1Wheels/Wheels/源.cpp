#include<iostream>
using namespace std;



/*program后会输出任意个随机字符结束
int main() {
	char str[7] = { 'p', 'r', 'o', 'g', 'r', 'a', 'm' };
	cout << str << endl;

	return 0;
}
*/

/*验证静态数组默认值为0
int i = 1;
int main() {
	{
		int i = 2;
	}
	static int a[3][4] = { { 1 },{ 0,6 },{ 0,0,11 } };
	cout << i << endl;
	return 0;
}
*/

/*编译报错，vector类型的int数组是vector对象，不能当做int类型的数组传入

#include <vector>

void fun(int a[]) {}

int main() { std::vector<int> vec; fun(vec); return 0;
*/