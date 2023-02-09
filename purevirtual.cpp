#include<iostream>
using namespace std;
class Area
{
	public:
		virtual float calArea() {}//pure virtual function
};
class Rect : public Area
{
	float l,b;
	public:
		Rect(float x, float y)
		{
			l=x;
			b=y;
		}
		float calArea()
		{
			return l*b;
		}
};
class Circle : public Area
{
	float r;
	public:
		Circle(float x)
		{
			r=x;
		}
		float calArea()
		{
			return 3.14*r*r;
		}
};

int main()
{
	Area *ptr;
	Rect r(2.2,1.1);
	Circle c(2.2);
	
	ptr=&r;
	float res1=ptr->calArea();
	cout<<"\n Area of rectangle : "<<res1;

	ptr=&c;
	float res2=ptr->calArea();
	cout<<"\n Area of circle : "<<res2;
	
	return 0;
}

