#include<iostream>
using namespace std;
inline void cube(int n)
{
	cout<<"\n cube of a number : "<<n*n*n;
}
int main()
{
	int num;
	cout<<"\n Enter any number :";
	cin>>num;
	cube(num);//cout<<"\n cube of a number : "<<n*n*n;
	cube(2);//cout<<"\n cube of a number : "<<n*n*n;
	cube(4);//cout<<"\n cube of a number : "<<n*n*n;
	return 0;
}
