#include<iostream>
using namespace std;

int main ()
{
	int a[3][3],b[3][3],i,j;
	
	cout<<"_______________________________________________FOR ELEMENTS OF 'A'____________________________________________________ \n";
	cout<<"\n";
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			cout<<"Enter elements for 'A' : ";
			cin>>
			a[i][j];
		}
	}
	
	return 0;
}
