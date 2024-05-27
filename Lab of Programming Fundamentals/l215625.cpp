#include<iostream>

using namespace std;
int main()
{
	
	int arr1[3][3]={ {1,2,3},{1,2,3},{1,2,3} };
	int arr2[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr1[i][j]=arr2[j][i];
		
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr2[i][j];

		}
	}
	system("pause");
	return 0;
}

