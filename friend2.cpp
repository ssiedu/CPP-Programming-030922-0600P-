#include<iostream>
using namespace std;
class ABC; // forward declaration
class XYZ
{
	int x;
	public:
		void setvalue(int a)
		{
			x=a;
		}
		friend void Largest(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void setvalue(int b)
		{
			y=b;
		}
		friend void Largest(XYZ,ABC);
};
void Largest(XYZ m,ABC n)
{
	if(m.x>n.y)
		cout<<"\n Largest Value : "<<m.x;
	else
		cout<<"\n Largest value : "<<n.y;
}
int main()
{
	XYZ a1;
	ABC a2;
	int v1,v2;
	cout<<"\n Enter First Number : ";
	cin>>v1;
	cout<<"\n Enter Second Number : ";
	cin>>v2;
	a1.setvalue(v1);
	a2.setvalue(v2);
	Largest(a1,a2);
	return 0;
}
