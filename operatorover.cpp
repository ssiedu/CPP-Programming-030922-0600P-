#include<iostream>
using namespace std;
class Operator
{
	int var;
	public:
		Operator()
		{
			var=10;
		}
		
		void operator --()
		{
			var--;
		}
		void display()
		{
			cout<<"\n value of variable : "<<var;
		}
};

int main()
{
	Operator op;
	--op;
	op.display();
	return 0;
}




