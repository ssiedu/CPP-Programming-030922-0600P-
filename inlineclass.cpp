#include<iostream>
using namespace std;
class Largest
{
	int fnum,snum;
	public:
		void getdata(int f,int s)
		{
			fnum=f;
			snum=s;
		}
		void max();
		void display();
};
void Largest :: display()
{
	cout<<"\n First Number : "<<fnum;
	cout<<"\n Second Number : "<<snum;
}

inline void Largest::max()
{
	cout<<"\n Largest Number : "<<((fnum>snum)?fnum:snum);
}

int main()
{
	Largest L;
	int a,b;
	cout<<"\n Enter First Number : ";
	cin>>a;
	cout<<"\n Enter Second Number : ";
	cin>>b;
	L.getdata(a,b);
	L.display();
	L.max();
	return 0;
}



