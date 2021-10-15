#include <iostream>
#include <string>
using namespace std;

int main() {
	string phonenum;
	cout << "전화번호를 입력하시오(예. 010-1234-5678) : ";
	cin >> phonenum;
	if (size(phonenum) == 13) {
		cout << "핸드폰 번호입니다 : ";
	}
	int startindex = 0;
	string f = "-";
	string r = "";
	while (true) {
		int findex = phonenum.find(f, startindex);
		if (findex == -1)
			break;
		phonenum.replace(findex, f.length(), r);
	}
	cout << phonenum;
}
