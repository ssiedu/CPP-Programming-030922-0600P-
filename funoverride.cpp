#include<iostream>
using namespace std;
class First
{
	public:
		virtual void print()
		{
			cout<<"\n This is base class print function";
		}
		void show()
		{
			cout<<"\n This is base class show function";
		}
		
};
class Second : public First
{
	public:
		void print()
		{
			cout<<"\n this is derive class print function";
		}
		void show()
		{
			cout<<"\n This is derive class show function";
		}
};
int main()
{
	First *ptr;
	Second s;
	ptr=&s;
	ptr->print();
	ptr->show();
	return 0;
}
