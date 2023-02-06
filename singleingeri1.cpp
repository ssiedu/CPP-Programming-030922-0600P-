#include<iostream>
#define pi 3.14
using namespace std;
class Area
{
	protected:
		float radius;
	public:
		void getradius()
		{
			cout<<"\n Enter Radius of circle : ";
			cin>>radius;
		}
		
};
class Derive : public Area
{
	float area ;
	public:
		void getarea()
		{
			area=pi*radius*radius;
			cout<<"\n Area of circle : "<<area ;
		}
};
int main()
{
	 Derive d;
	 d.getradius();
	 d.getarea();
	 return 0;
}
