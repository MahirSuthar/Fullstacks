#include<iostream>
using namespace std;

int main ()
{
	int a,b,result;
	char op;
	
	cout<<"this is my first c++ program";
	
	cout<<"\n";
	
	cout<<"\n________Calculator_______";
	
	cout<<"\n";
	
	cout<<"\nEnter your A : ";
	cin>>a;
	cout<<"A :"<<a;
	
	cout<<"\n";
	
	cout<<"\nEnter your Operator : ";
	cin>> op;
	cout<<"Operator : "<< op;
	
	cout<<"\n";
	
	cout<<"\nEnter your B : ";
	cin>>b;
	cout<<"B :"<<b;
	
	cout<<"\n";
	
	if( op == '+')
	{
		result = a+b;
		cout<<"\nResult of your values :"<<result<<endl;
	}
	
	else if( op == '-')
	{
		result = a-b;
		cout<<"\nResult of your values :"<<result<<endl;
	}
	else if( op == '*')
	{
		result = a*b;
		cout<<"\nResult of your values :"<<result<<endl;
	}
	else if( op == '/')
	{
		result = a/b;
		cout<<"\nResult of your values :"<<result<<endl;
	}
	else 
	{
		cout<<"\ninvalid data";
	}
	
	return 0;
}
