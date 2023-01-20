#include<iostream>
using namespace std;
int add(int *a, int *b)
{
	return *a+*b;
}
int main()
{
	int num1,num2;
	cout<<"\n Enter first number : ";
	cin>>num1;
	cout<<"\n Enter second number : ";
	cin>>num2;
	cout<<"\n Addition of number : "<<add(&num1,&num2);
	return 0;
}
