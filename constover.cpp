#include<iostream>
using namespace std;
class Person
{
	public:
		int age;
		
		Person() {} //default constructor
		
		Person(int a) // parameterized constructor
		{
			age=a;
		}
		
		Person(const Person &b)//copy constructor
		{
			age=b.age;
		}
		
		void display()
		{
			cout<<"\n Age of person : "<<age;
		}
};

int main()
{
	Person p;
	p.display();
	Person p1(22);
	p1.display();
	Person p2(p1);
	p2.display();
	Person p3=p1;
	p3.display();
	
	Person p4;//object declaration
	p4=p1;//object assignment
	p4.display();
	return 0;
}










