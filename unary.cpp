#include<iostream>
using namespace std;
int main()
{
	int a=2;
	++a;
	cout<<"\n pre increment : "<<a;//3
	--a;
	cout<<"\n pre decrement : "<<a;//2
	a++;
	cout<<"\n post increment : "<<a;//3
	a--;
	cout<<"\n post decrement : "<<a;//2
	return 0;
}
