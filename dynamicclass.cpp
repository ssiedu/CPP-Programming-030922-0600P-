#include<iostream>
using namespace std;
class Student
{
	int rollno;
	string name;
	float per;
	public:
		Student(int r, string s,float p)
		{
			rollno=r;
			name=s;
			per=p;
		}
		void display()
		{
			cout<<"Student roll no : "<<rollno<<endl;
			cout<<"Student Name    : "<<name<<endl;
			cout<<"Student Percentage : "<<per<<endl;
		}
};
int main()
{
	Student *ptr=new Student(101,"Ram",78.9);
	ptr->display();
	delete ptr;
	return 0;
	
}
