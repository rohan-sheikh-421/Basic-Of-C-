#include<iostream>
using namespace std;
int main()
{
	int sales, salary;
	cout << "sales in the week";
	cin >> sales;
	
	
	if (sales > 0)
	{
		salary = 2000 + (sales * 0.09);
		cout << "employ salary" << salary;

	}
	else if (sales < 0)
		cout << "sorry salary cannot be computed";
	system("pause");
	return 0;
}