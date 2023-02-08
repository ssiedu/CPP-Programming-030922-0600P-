#include<iostream>
using namespace std;
class Base
{
	protected:
		int fnum,snum;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>fnum;
			cout<<"\n Enter Second Number : ";
			cin>>snum;
		}
};
class First : public Base
{
	int sum;
	public:
		void getsum()
		{
			sum=fnum+snum;
			cout<<"\n Sum is : "<<sum;
		}
};
class Second : public Base
{
	int mul;
	public:
		void getmul()
		{
			mul=fnum*snum;
			cout<<"\n Mul is : "<<mul;
		}
};
class Third : public Base
{
	int mod;
	public:
		void getmod()
		{
			mod= fnum%snum;
			cout<<"\n modulus : "<<mod;
		}
};

int main()
{
	First f;
	f.getdata();
	f.getsum();
	Second s;
	s.getdata();
	s.getmul();
	Third t;
	t.getdata();
	t.getmod();
	return 0;
}






