#include<iostream>
using namespace std;
namespace First
{
	void print()
	{
		cout<<"\n This is first name space";
	}
}
namespace Second 
{
	void print()
	{
		cout<<"\n This is second name space";
	}
}
 using namespace Second;
 //using namespace First;
int main()
{
	//First::print();
	//Second::print();
	//print();
	print()
	return 0;
}
