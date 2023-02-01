#include<iostream>
using namespace std;
class Employee
{
	public:
	int id;
	string name;
	float sal;
	
		Employee(int i,string n,float s) // parameterized constructor
		{
			id=i;
			name=n;
			sal=s;
		}
		
		Employee(const Employee &a)
		{
			id=a.id;
			name=a.name;
			sal=a.sal;
		}
		void display()
		{
			cout<<id<<"\t"<<name<<"\t"<<sal<<endl;
		}
		
	 
};

int main()
{
	Employee emp(101,"Ram",88000);
	emp.display();

	
	Employee emp1=emp;
	emp1.display();
	/*cout<<"\n Employee Id : "<<emp1.id;
	cout<<"\n Employee Name : "<<emp1.name;
	cout<<"\n Employee salary : "<<emp1.sal;*/
	
	Employee emp2(emp);
	emp2.display();
	/*cout<<"\n Employee Id : "<<emp2.id;
	cout<<"\n Employee Name : "<<emp2.name;
	cout<<"\n Employee salary : "<<emp2.sal;*/
	
	
	return 0;
}
