#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int id;
	char name[10];
	float sal;
	
	ofstream fout("Employee");
	
	cout<<"\n Enter Employee Id : ";
	cin>>id;
	fout<<id<<endl;
	
	cout<<"\n Enter Employee Name : ";
	cin>>name;
	fout<<name<<endl;
	
	cout<<"\n Enter Employee Salary : ";
	cin>>sal;
	fout<<sal<<endl;	
	fout.close();
	
	ifstream fin("Employee");
	fin>>id;
	fin>>name;
	fin>>sal;
	
	cout<<"\n Employee id : "<<id;
	cout<<"\n Employee Name : "<<name;
	cout<<"\n Employee salary : "<<sal;
	
	fin.close();
	return 0;
}
