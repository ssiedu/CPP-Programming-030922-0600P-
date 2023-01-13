#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	float radius,area_of_circle;
	cout<<"\n Enter Radius of circle : ";
	cin>>radius;
	area_of_circle=3.14*radius*radius;
	cout<<fixed;
	cout<<setprecision(2)<<area_of_circle;
	return 0;
}
