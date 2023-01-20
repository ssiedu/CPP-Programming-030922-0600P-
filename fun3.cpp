#include<iostream>
using namespace std;
void area(float r)
{
	cout<<"\n area of circle : "<<3.14*r*r;
}

int main()
{
	float r;
	cout<<"\n Enter radius : ";
	cin>>r;
	area(r);
	return 0;
}
