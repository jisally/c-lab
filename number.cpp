#include <iostream>
#include <string>
using namespace std;

//2021111362 ������ȣ�а� ���¿�
int main() {
	string phonenum;
	cout << "��ȭ��ȣ�� �Է��Ͻÿ�(��. 010-1234-5678) : ";
	cin >> phonenum;
	if (size(phonenum) == 13) {
		cout << "�ڵ��� ��ȣ�Դϴ� : ";
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