#include<iostream>
using namespace std;
int main()
{
	int hours, rate, salary,excess;
	cout << "hours worked"<<endl;
	cin >> hours;
	cout << "hourly rate";
	cin >> rate;
	if (hours <= 40)
	{
		salary = hours * rate;
		cout << "employ salary" << salary;
	}
	else if (hours > 40)
	{
		excess = rate * 1.5;
			salary= hours * (rate+excess);
			cout << "overtime salary" << salary;
    }
	system("pause");
	return 0;
}