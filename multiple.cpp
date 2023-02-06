#include<iostream>
using namespace std;
class First
{
	protected:
		float p_amount;
	public:
		void getamount()
		{
			cout<<"\n Enter principle amount : ";
			cin>>p_amount;
		}
};
class Second
{
	protected:
		float rate;
	public:
		void getrate()
		{
			cout<<"\n Enter rate of interest : ";
			cin>>rate;
		}
};
class Third
{
	protected:
		float time;
	public:
		void gettime()
		{
			cout<<"\n Enter time in year : ";
			cin>>time;
		}
};
class Child : public First,public Second,public Third
{
	int si;
	public:
		void getsi()
		{
			si=(p_amount*rate*time)/100;
			cout<<"\n Simple Interest : "<<si;
			cout<<"\n Total amount :  "<<si+p_amount;
		}
};
int main()
{
	Child c;
	c.getamount();
	c.getrate();
	c.gettime();
	c.getsi();
	return 0;
}
