#include<iostream>
using namespace std;
struct employee
{
	int id;
	char name[20];
	float sal;
	void getdata()
	{
		cout<<"\nEnter Employee Id :";
		cin>>id;
		cout<<"\nEnter Employee Name : ";
		cin>>name;
		cout<<"\n Enter Employee Salary : ";
		cin>>sal;
	}
	void display()
	{
		cout<<"\n Employee Id : "<<id;
		cout<<"\n Employee Name : "<<name;
		cout<<"\n Employee salary : "<<sal;
	}
}emp;
int main()
{
	emp.getdata();
	emp.display();
	return 0;
}




