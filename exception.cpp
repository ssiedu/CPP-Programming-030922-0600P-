#include<iostream>
using namespace std;
int main()
{
	int a=10,b=5,c;
	try
	{
		if(b==0)
		 throw b;
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
	return 0;
}
