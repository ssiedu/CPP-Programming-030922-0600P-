#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base,exp;
	cout<<"\n Enter any Number : ";
	cin>>base;
	cout<<"\n Enter power of a number : ";
	cin>>exp;
	int res=pow(base,exp);
	cout<<"\n value of a number is : "<<res;
	cout<<"\n sqrt function : "<<sqrt(base);
	return 0;
}
