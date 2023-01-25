#include<iostream>
using namespace std;
class Largest
{
	int fnum,snum;
	public:
		void getdata();
		void display();
		int max();
};
void Largest :: getdata()
{
	cout<<"\n Enter First Number : ";
	cin>>fnum;
	cout<<"\n Enter Seocnd Number : ";
	cin>>snum;
}

void Largest :: display()
{
	cout<<"\n First Number : "<<fnum;
	cout<<"\n Second Number : "<<snum;
	cout<<"\n Largest Number is : "<<max();
}
int Largest :: max()
{
	if(fnum>snum)
		return fnum;
	else
		return snum;
}
int main()
{
	Largest l;
	l.getdata();
	l.display();
	//int res=l.max();
	//cout<<"\n maximum value : "<<res;
	return 0;
}

