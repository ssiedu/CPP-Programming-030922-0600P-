#include<iostream>
using namespace std;
template <typename U>
U Add(U num1, U num2)
{
	U result;
	result=num1+num2;
	return result;
}
int main()
{
	cout<<"\n Addition of Two integer value : ";
	int r1;
	r1= Add<int>(10,20);
	cout<<r1;
	cout<<"\n Addition of two float values : ";
	float r2=Add<float>(5.5,10.2);
	cout<<r2;
	return 0;
}
