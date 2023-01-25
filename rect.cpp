#include<iostream>
using namespace std;
class Area
{
	int length,breadth;
	public:
		void getdata(int l, int b)
		{
			length = l;
			breadth = b;
		}
		void display();
		
};
void Area :: display()
{
	int rect=length * breadth;
	cout<<"Area of rectangle : "<< rect;
}
int main()
{
	Area a;
	int l,b;
	cout<<"\n Enter length of rectangle : ";
	cin>>l;
	cout<<"\n Enter breadth of rectangle : ";
	cin>>b;
	a.getdata(l,b);
	a.display();
	return 0;
}
