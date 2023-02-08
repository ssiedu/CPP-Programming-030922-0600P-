#include<iostream>
using namespace std;
class Base
{
	protected:
		int num1,num2;
	public:
		void getdata()
		{
			cout<<"\n Enter first Number : ";
			cin>>num1;
			cout<<"\n Enter Second Number : ";
			cin>>num2;
		}
};
class Derive : public Base
{
	protected:
	int sum;
	public:
		void getsum()
		{
			sum=num1+num2;
		}
};
class derive2
{
	protected:
	int mul,m,n;
	public:
		void getvalue()
		{
			cout<<"\n Enter First value : ";
			cin>>m;
			cout<<"\n Enter Second value : ";
			cin>>n;
		}
		void getmul()
		{
			mul=m*n;
		}
};
class child : public Derive , public derive2 
{
	public:
		void display()
		{
			cout<<num1<<"+"<<num2<<"="<<sum<<endl;
			cout<<m<<"*"<<n<<"="<<mul<<endl;
		}
};

int main()
{
	child c;
	c.getdata();
	c.getsum();
	//c.display();
	c.getvalue();
	c.getmul();
	c.display();
	return 0;
}
