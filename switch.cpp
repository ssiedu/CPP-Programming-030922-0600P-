#include<iostream>
using namespace std;
int main()
{
	char ch;
	int num1,num2;
	cout<<"\n Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	
	cout<<" 1.Add\n 2.Sub\n 3.Mul\n 4.Div"<<endl;
	cout<<"\n Enter Your choice like (+,-,*,/) : ";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
			cout<<"Addition is : "<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Subtraction is : "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Multiplication is : "<<num1*num2<<endl;
			break;
		case '/':
			cout<<"Division is : "<<num1/num2<<endl;
			break;
		default:
			cout<<"Enter valid choice ";
			break;
	}
	return 0;
}
