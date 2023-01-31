#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public:
		void setvalue()
		{
			code=++count;
		}
		void showcode()
		{
			cout<<"\n Number of object : "<<code;
		}
		static void showcount()
		{
			cout<<"\n count : "<<count;
		}
};
int test :: count;
int main()
{
	test t1,t2;
	t1.setvalue();
	t2.setvalue();
	test::showcount();
	
	test t3;
	t3.setvalue();
	test::showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	
	return 0;
}
