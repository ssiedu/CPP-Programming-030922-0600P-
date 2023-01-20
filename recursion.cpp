#include<iostream>
using namespace std;
int recursion(int n)
{
	if(n==1)
	  return 1;
	else 
	  return n+recursion(n-1);
}
int main ()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	cout<<"\n sum of number : "<<recursion(num);
	return 0;
}
