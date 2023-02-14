#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,c;
	try
	{
		if(b==0)
		 throw b;
		else if(b>a)
		  throw "denominator is greater than numerator";
		else
		{
			c=a/b;
			cout<<"\n value is : "<<c;
		}
	}
	catch(int ex)
	{
		cout<<"you can not declare "<<ex<<" as a denominator";
	}
	catch(char const *ex1)
	{
		cout<<ex1;
	}
	return 0;
}
