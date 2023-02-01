#include<iostream>
using namespace std;
int count=0;
class Alpha
{
	public:
		Alpha()
		{
			count++;
			cout<<"\n Number of object created : "<<count;
		}
		~Alpha()
		{
			cout<<"\n Number of object destroyed : "<<count;
			count--;
		}
};
int main()
{
	cout<<"\n In Main Function : "<<endl;
	Alpha a1,a2,a3,a4;
	{
		cout<<"\n Block 1 : "<<endl;
		Alpha a5;
	}
	{
		cout<<"\n Block 2 : "<<endl;
		Alpha a6;
	}
	cout<<"\n Re-enter in main function : "<<endl;
	return 0;
}
