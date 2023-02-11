#include<iostream>
#include<math.h>
using namespace std;
class Math
{
	int base,exp;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>base;
			cout<<"\n Enter power of number : ";
			cin>>exp;
		}
		void calculate()
		{
			int res;
			res=pow(base,exp);
			cout<<"\n result : "<<res;
		}
};
int main()
{
	Math m;
	m.getdata();
	m.calculate();
	return 0;
}
