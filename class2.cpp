#include<iostream>
using namespace std;
class Person
{
	private:
	int id;
	char name[20];
	float salary;
	public:
	void input()
	{
		cout<<"\n Enter Id Of Person : ";
		cin>>id;
		cout<<"\n Enter name of person : ";
		cin>>name;
		cout<<"\n Enter salary : ";
		cin>>salary;
	}
	
	void output()
	{
		cout<<"Person Id : "<<id<<endl;
		cout<<"Person name : "<<name<<endl;
		cout<<"Person Salary : "<<salary<<endl;
	}
}p2;//global object
int main()
{
	Person p1;//local objects
	p1.input();
	p1.output();
	p2.input();
	p2.output();
	return 0;
}
