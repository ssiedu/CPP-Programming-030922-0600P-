#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"\n Enter any Number : ";
	cin>>n;
	int i=1;
	do
	{
		sum = sum + i ;
		i=i+1;
	}while(i<=n);
	cout<<"\n Sum of Natural Numbers : "<<sum;
	return 0;
}
