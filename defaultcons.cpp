#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		string name;
		float sal;
	
		Employee()
		{
			id=101;
			name="Ram";
			sal=89000;
		}
		void display()
		{
			cout<<"\n Employee Id : "<<id;
			cout<<"\n Employee Name : "<<name;
			cout<<"\n Employee salary : "<<sal;
		}
};
int main()
{
	Employee emp;
	emp.display();
	/*cout<<"\n Employee Id : "<<emp.id;
	cout<<"\n Employee Name : "<<emp.name;
	cout<<"\n Employee Salary : "<<emp.sal;*/
	return 0;
}
