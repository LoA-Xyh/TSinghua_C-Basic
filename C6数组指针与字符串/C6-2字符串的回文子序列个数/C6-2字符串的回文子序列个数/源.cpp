#include <iostream>
#include <string>
using namespace std;

int charNum;

int symmetryString(char *fore, char *behind);

int main() {
	//获取字符串及第一层回文数量
	string inputString;
	cin >> inputString;
	charNum = inputString.size();//回文数量

	//创建数组用于指针选择；
	char *character = new char[charNum + 1];//字符数组首指针
	character[charNum] = 0;
	char *behindChar = &character[charNum - 1];//字符数组末尾指针

	//将inputString转换为character数组
	for (int i = 0; i < charNum; i++) {
		character[i] = inputString[i];
	}

	cout << symmetryString(character, behindChar) << endl;
	return 0;
}
int symmetryString(char *fore, char *behind) {
	if (behind - fore == 0) {
		return 1;
	}
	else if (behind - fore == 1) {
		if (behind[0] == fore[0])
			return 3;
		else return 2;
	}
	else {
		if (fore[0] == behind[0]) {
			return  symmetryString((fore + 1), behind) + symmetryString(fore, (behind - 1)) +1 ;
		}
		else return  symmetryString((fore + 1), behind) + symmetryString(fore, (behind - 1)) - symmetryString((fore + 1), (behind - 1));
	}
}