#include<iostream>
using namespace std;
int cube()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	return num*num*num;
}
int main()
{
	int res=cube();
	cout<<"\n cube of a number : "<<res;
	return 0;
}
