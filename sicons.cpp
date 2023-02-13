#include<iostream>
using namespace std;
class SI
{
	public:
	float p,r,t;
	
	SI(float a,float rate,float time)
	{
		p=a;
		r=rate;
		t=time;
	}
	void display()
	{
		cout<<p<<"\t"<<r<<"\t"<<t;
	}
};
int main()
{
	float p1,r1,t1;
	cin>>p1>>r1>>t1;
	SI s(p1,r1,t1);
	s.display();
	return 0;
}
