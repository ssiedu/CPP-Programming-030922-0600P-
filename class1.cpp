#include<iostream>
using namespace std;
class employee
{
	int id;
	char name[20];
	float sal;
	public:
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
};//class object (global)
int main()
{
	employee emp; // local object 
	emp.getdata();
	emp.display();
	//cout<<emp.id;
	return 0;
}




