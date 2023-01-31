#include<iostream>
using namespace std;
class item
{
	int num;
	static int count;
	public:
		void setvalue(int a)
		{
			num=a;
			count++;
		}
		void showcount()
		{
			cout<<"\n Number of object : "<<count;
		}
};
int item :: count; // definition of static variable
int main()
{
	item i1,i2,i3;
	i1.showcount();
	i2.showcount();
	i3.showcount();
	cout<<"\n After Function call : "<<endl;
	i1.setvalue(100);
	i2.setvalue(200);
	i3.setvalue(300);
	i1.showcount();
	i2.showcount();
	i3.showcount();
	return 0;
}





