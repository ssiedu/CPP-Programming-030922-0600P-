#include<iostream>
using namespace std;
int main()
{
	int a=12,b=60,c=35;
	cout<<"AND : "<<(a>b && a>c && b>c)<<endl;//0
	cout<<"OR  : "<<(a>c || b>a || c>b)<<endl;//1
	cout<<"AND OR : "<<(a>b && b>c || c<a)<<endl;//0
	cout<<"AND OR : "<<(a==b && a!=c || b<=c)<<endl;//0
	cout<<"OR NOT : "<<(!(a<b || b>c))<<endl;//0
	cout<<"AND NOT : "<<(a==b && (!(b>c)))<<endl;//0
	return 0;
}
