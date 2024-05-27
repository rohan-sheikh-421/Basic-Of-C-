#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if(a>b)
	{ 
		if(a>c)
			cout<<"a is largest"<<a;
		else 
			cout<<"c is largest"<<c;
	}
	else if(b>c)
	{
		if(b>a)
			cout<<"b is greatest"<<b;
		else 
			cout<<"a is greatest"<<a;
	}
	system("pause");
	return 0;
}