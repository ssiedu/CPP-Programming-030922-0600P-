#include<iostream>
using namespace std;
int main()
{
	int age=15;
	try
	{
		if(age>=18)
		  cout<<"yor are eligible for vote";
		else
			throw age;
	}
	catch(int ex)
	{
		cout<<"\n you are not eligible for vote becoz u r "<<age;
	}
}
