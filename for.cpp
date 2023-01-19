#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"\n Enter any Number : ";
	cin>>n;
	for(int i=1;i<=n;i++)
		sum = sum + i ;
	cout<<"\n Sum of Natural Numbers : "<<sum;
	return 0;
}
