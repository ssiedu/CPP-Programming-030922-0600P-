#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	
	if(num1!=num2)
	{
		cout<<endl<<num1<<" is not equal to "<<num2;
		if(num1>num2)
			cout<<endl<<num1<<" is greater than "<<num2;
		else
			cout<<endl<<num2<<" is greater than "<<num1;
	}
	
	else
		cout<<endl<<num1<< " is equal to "<<num2;
		
	return 0;
}
