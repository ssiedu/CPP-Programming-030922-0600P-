#include<iostream>
using namespace std;
class time
{
	int hour,minute;
	public:
		void getdata(int h, int m)
		{
			hour = h;
			minute = m;
		}
		void display()
		{
			cout<<hour<<" hr :"<<minute<<" min "<<endl;
		}
		void sum(time,time);
};
void time :: sum(time t1,time t2)
{
	minute = t1.minute + t2.minute;
	hour   = minute/60;
	minute = minute%60;
	hour   = hour + t1.hour + t2.hour;
}

int main()
{
	time t1,t2,t3;
	t1.getdata(2,35);
	t2.getdata(3,55);
	t3.sum(t1,t2);
	cout<<"\n T1 Time : ";
	t1.display();
	cout<<"\n T2 Time : ";
	t2.display();
	cout<<"\n T3 Time : ";
	t3.display();
	return 0;
	
}
















