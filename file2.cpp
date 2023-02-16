#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C program");
	fout<<"Array"<<endl;
	fout<<"Function"<<endl;
	fout<<"Structure"<<endl;
	fout<<"Pointer"<<endl;
	fout.close();
	
	fout.open("C++ program");
	fout<<"Abstraction"<<endl;
	fout<<"Encapsulation"<<endl;
	fout<<"Inheritance"<<endl;
	fout<<"Polymorphism"<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("C program");
	cout<<"\n Content of C programming file : "<<endl;
	char ch[50];
	while(fin)
	{
		fin.getline(ch,50);
		cout<<ch<<"\n";
	}
	fin.close();
	
	fin.open("C++ program");
	cout<<"\n Contents of C++ programming file : "<<endl;
	while(fin)
	{
		fin.getline(ch,50);
		cout<<ch<<"\n";
	}
	fin.close();
	return 0;
}
