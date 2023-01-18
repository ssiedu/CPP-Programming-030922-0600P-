#include<iostream>
using namespace std;
int main()
{
	int f_num,s_num;
	//user input
	cout<<"Enter First Number : ";
	cin>>f_num;
	cout<<"Enter Second Number : ";
	cin>>s_num;
	//check number is greater
	if(f_num>s_num)
	{
		cout<<"Result : "<<endl;
		cout<<f_num<<" is greater than "<<s_num;
	}
		
	else
		cout<<s_num<<" is greater than "<<f_num;
	
	return 0;
}
