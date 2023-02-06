#include<iostream>
using namespace std;
class First
{
	protected:
	int num1,num2;
	public:
		void getdata(int a, int b)
		{
			num1=a;
			num2=b;
		}
};
class Second : public First
{
	int sum;
	public:
		void getsum()
		{
			sum=num1+num2;
			cout<<"\n Sum of two numbers : "<<sum;
		}
};

int main()
{
	Second s;
	int a,b;
	cout<<"\n Enter First value : ";cin>>a;
	cout<<"\n Enter Second Value : ";cin>>b;
	s.getdata(a,b);
	s.getsum();
	return 0;
}
