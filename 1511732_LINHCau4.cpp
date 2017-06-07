#include<iostream>
#include<string>

using namespace std;
#include <sstream>
struct SINH_VIEN
{
	string Ten;
	double mssv;
	double nienkhoa;
};
#define MAX 50
int main() {
	SINH_VIEN A[MAX];
	string str;
	double mssv, nienkhoa;
	getline(cin, str);
	stringstream  ss(str);


	for (int i = 0; i < 3; i++) {
		getline(cin, str); 	stringstream scin1(str);
		scin1 >> A[i].Ten;
		getline(cin, str); stringstream scin2(str);
		scin2 >> A[i].mssv;
		getline(cin, str); stringstream scin3(str);
		scin3 >> A[i].nienkhoa;
	}

	cout << A[0].Ten << " " << A[0].mssv << endl;
	system("pause");
	return 0;
}