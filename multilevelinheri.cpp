#include<iostream>
using namespace std;
class First
{
	protected:
		int num1,num2;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>num1;
			cout<<"\n Enter Second Number : ";
			cin>>num2;
		}
};
class Second : public First
{
	protected:
		int sum;
	public:
		void getsum()
		{
			sum=num1+num2;
		}
};
class Third : public Second
{
	public:
		void display()
		{
			cout<<"\n Sum of two numbers : "<<sum;
		}
};
int main()
{
	Third T;
	T.getdata();
	T.getsum();
	T.display();
	return 0;
}
