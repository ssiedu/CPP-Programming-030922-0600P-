#include<iostream>
using namespace std;
class Student
{
	private:
	int id;
	string name;
	float marks;
	public:
		void getdata()
		{
			cout<<"\n Enter student Id : ";
			cin>>id;
			cout<<"\n Enter student name : ";
			cin>>name;
			cout<<"\n Enter Student marks : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n Student Id : "<<id;
			cout<<"\n Student Name : "<<name;
			cout<<"\n Student Marks : "<<marks;
		}
};

int main()
{
	Student s;
	s.getdata();
    s.display();
	return 0;
}

