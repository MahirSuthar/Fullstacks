#include<iostream>
#include<string.h>
using namespace std;

	class employee
	{
		private:
			int ID;
			string name;
			string depm;
			float salary;
			
		public:
			void inputdata()
			{
			cout<<"\nEnter Your ID number :- ";
			cin>>ID;
			cin.ignore();
			cout<<"\nEnter Your ID number :- ";
			getline(cin,name);
			cout<<"\nEnter your Department :- ";
			getline(cin,depm);
			cout<<"\nEnter your salary :- ";
			cin>>salary;
			}	
			
			void outputdata()
			{
			cout<<"_________________________EMPLOYEE's DETAILS________________________";
			cout<<"\n";
			cout<<"\nID :- "<<ID<<"\nNAME :- "<<name<<"\nDEPARTMENT :- "<<depm<<"\nSALARY :- "<<salary<<endl;
			}
	};
int main ()
{
	employee e1;
	e1.inputdata();
	e1.outputdata();
	
	return 0;
}
