#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if(a<b)
	{
		if(a<c)
			cout<<"a is smallest"<<a;
		else 
			cout<<"c is smallest"<<c;
	}
	else if(b<c)
	{ 
		if(b<a)
			cout<<"b is smallest"<<b;
		else
			cout<<"a is smallest"<<a;
	}
	system("pause");
	return 0;
}