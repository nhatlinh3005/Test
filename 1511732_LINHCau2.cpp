#include<iostream>
#include<math.h>
using namespace std;


int main() {

	int n;
	cout << "Nhap vao so tu nhien N (0 <= N <= 200):  ";
	cin >> n;
	while (n>200 || n<0) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "nhap lai so tu nhien N: ";
		cin >> n;
	}

	int s = 0;
	int a = 1, i = 0;
	while (a < 2 * n + 1) {
		a = 2 * i + 1;
		if (i == n) {
			s = pow(-1, n)*pow(a, 3) + s;
		}
		else if (i % 2 == 0) {
			s = pow(-1, 2)*pow(a, 3) + s;
		}
		else {
			s = pow(-1, 1)*pow(a, 3) + s;
		}
		i += 1;
	}
	cout << s << endl;
	system("pause");
	return 0;
}