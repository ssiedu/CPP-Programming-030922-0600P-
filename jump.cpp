#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i>=10 || i<=1)
			continue;//break;
		cout<<"\t"<<i;
	}
	return 0;
}
