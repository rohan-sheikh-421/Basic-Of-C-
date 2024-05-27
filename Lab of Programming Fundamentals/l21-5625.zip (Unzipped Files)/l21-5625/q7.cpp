#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter three numbers";
	cin >> a >> b >> c;
	if (a < b && a < c && b < c)
		cout << a << b << c;
	else if (b < c && b < a && a < c)
		cout << b << a << c;
	else if (c < b && c < a && b < a)
		cout << c << b << a;
	system("pause");
	return 0;
}