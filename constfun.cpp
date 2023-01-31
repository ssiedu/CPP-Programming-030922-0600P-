#include<iostream>
using namespace std;
class simpleInterest
{
	float p,r,t,si,total;
	public:
		void getdata();
		void display() const
		{
			cout<<"\n Principle amount : "<<p;
			cout<<"\n Rate of interest : "<<r;
			cout<<"\n Time in year     : "<<t;
			
			cout<<"\n Simple Interest : "<<si;
			cout<<"\n Total amount    : "<<total;
		}
};
void simpleInterest :: getdata()
{
	cout<<"\n Enter Amount : ";
	cin>>p;
	cout<<"\n Enter rate of interest : ";
	cin>>r;
	cout<<"\n Enter time in year : ";
	cin>>t;
	si=(p*r*t)/100;
	total = p+si;
}
int main()
{
	simpleInterest s;
	s.getdata();
	s.display();
	return 0;
}
