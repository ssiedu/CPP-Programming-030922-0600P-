#include<iostream>
using namespace std;
class First
{
	public:
		void sum(int a, int b)
		{
			cout<<"\n sum of two integer value : "<<a+b;
		}
};
class Second : public First
{
	public:
		void sum(float a,float b)
		{
			cout<<"\n sum of two float value : "<<a+b;
		}
};

int main()
{
	Second s;
	s.sum(10,20);
	s.sum(12.3,10.5);
	return 0;
}
