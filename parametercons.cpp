#include<iostream>
using namespace std;
class Employee
{
	public:
	int id;
	string name;
	float sal;
	
		Employee(int i,string n,float s)
		{
			id=i;
			name=n;
			sal=s;
		}
	  void display()
	  {
	  	cout<<id<<"\t"<<name<<"\t"<<sal<<endl;
	  }
};

int main()
{
	Employee emp(101,"Ram",87000);
	Employee emp1(102,"shyam",88000);
	cout<<"\n Employee Details : "<<endl;
	emp.display();
	emp1.display();
	/*cout<<"\n Employee Id : "<<emp.id;
	cout<<"\n Employee Name : "<<emp.name;
	cout<<"\n Employee salary : "<<emp.sal;
	
	cout<<emp.id<<"\t"<<emp.name<<"\t"<<emp.sal;*/
	return 0;
}
