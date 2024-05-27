#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,diff,div,mul;
	char c;
	cin>>a>>b;
	cout<<"enter operation";
	cin>>c;
	if(c=='+')
		cout<<"sum= :"<<a+b;
	else if(c=='-')
		cout<<"difference :"<<a-b;
	else if(c=='/')
		cout<<"division :"<<a/b;
	else if(c=='*')
		cout<<"multiply :"<<a*b;
	else
		cout<<"nothing";
	system("pause");
	return 0;
}