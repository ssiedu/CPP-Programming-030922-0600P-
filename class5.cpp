#include<iostream>
using namespace std;
class Student
{
	int roll_no;
	char name[20];
	float per;
	
	public:
		void getdata();
		void display();
};
	void Student :: getdata()
		{
			cout<<"\n Enter Student roll no : ";
			cin>>roll_no;
			cout<<"\n Enter student name : ";
			cin>>name;
			cout<<"\n Enter Student percentage : ";
			cin>>per;
		}
		
	void Student :: display()
		{
			cout<<"\n Student Roll no : "<<roll_no;
			cout<<"\n Student Name    : "<<name;
			cout<<"\n Student Percentage : "<<per;
		}

int main()
{
	Student s;
	s.getdata();
	s.display();
	return 0;
}
