#include<iostream>
using namespace std;
class First
{
	public:
		void display()
		{
			cout<<"\n This is first class display function";
		}
};
class Second
{
	public:
		void display()
		{
			cout<<"\n This is second class display function";
		}
};
class Third : public First,public Second
{
	public:
		void print()
		{
			First::display();
			Second::display();
		}
};
int main()
{
	Third T;
	T.print();
	//First f;
	//f.display();
	T.First::display();
	T.Second::display();
	return 0;
}
