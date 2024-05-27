#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
    if(a>b)
	{
		if(b>c)
			cout<<"decreasing order"<<a<<b<<c;
		else 
			cout<<"decreasing order"<<a<<c<<b;
	}

	else if(b>c)
	{
		if(c>a)
			cout<<"decreasing order"<<b<<c<<a;
		else 
			cout<<"decreasing order"<<b<<a<<c;
	}

	else if(c>a)
	{
		if(a>b)
			cout<<"decreasing order"<<c<<a<<b;
		else
			cout<<"decreasing order"<<c<<b<<a;
	}
	system("pause");
	return 0;
}