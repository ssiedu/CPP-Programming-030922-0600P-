#include<iostream>
using namespace std;
class Addition
{
	int f_num,s_num,add;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>f_num;
			cout<<"\n Enter Second Number : ";
			cin>>s_num;
		}
		void sum()
		{
			add=f_num+s_num;
			cout<<"\n addition is : "<<add;
		}
		
};
int main()
{
	Addition a;
	a.getdata();
	a.sum();
	
	return 0;
}
