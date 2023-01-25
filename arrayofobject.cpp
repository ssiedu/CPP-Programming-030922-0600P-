#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[10];
	float sal;
	public:
		void getdata()
		{
			cout<<"\n Enter Employee id : ";
			cin>>id;
			cout<<"\n Enter Employee Name : ";
			cin>>name;
			cout<<"\n Enter employee salary : ";
			cin>>sal;
		}
		void display()
		{
			cout<<"\n Employee id : "<<id;
			cout<<"\n Employee Name : "<<name;
			cout<<"\n Employee Salary : "<<sal;
		}
};

int main()
{
	Employee e[3];
	cout<<"\n Enter Employee Details : "<<endl;
	for(int i=0;i<3;i++)
	{
		e[i].getdata();
	}
	cout<<"\n Employee Details : "<<endl;
	for(int i=0;i<3;i++)
	{
		e[i].display();
	}
	return 0;
}


