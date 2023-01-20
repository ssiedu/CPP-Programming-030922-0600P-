#include<iostream>
using namespace std;
float rect(float l, float b)
{
	return l*b;
}
int main()
{
	float l,b;
	cout<<"\n Enter length : ";
	cin>>l;
	cout<<"\n Enter breadth : ";
	cin>>b;
	cout<<"\n area of rectangle : "<<rect(l,b);
	return 0;
	
}
