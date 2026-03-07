#include<iostream>
using namespace std;

int main ()
{
	int a[5],i,j,temp;
	
	cout<<"_______________________________________________FOR ELEMENTS OF 'A'____________________________________________________ \n";
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter your elements : ";
		cin>>a[i];
	}
	
	cout<<"_______________________________________________'This is Stored value'________________________________________________\n";
	
	for(i=0;i<5;i++)
	{
		cout<<"\nYour value at  ["<<i<< "] : "<<a[i];
	}
	
	
	cout<<"\n";
	cout<<"_______________________________________________'This is Ascending Order'________________________________________________\n";
	cout<<"\n";
	
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		cout<<"\n[ "<<i<<" ]The Values in acsending order :"<<a[i];
	}
	
	cout<<"\n";
	cout<<"_______________________________________________'This is Desending Order'________________________________________________\n";
	cout<<"\n";


	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		cout<<"\n[ "<<i<<" ]The Values in decendingorder :"<<a[i];
	}
	
	return 0;
}
