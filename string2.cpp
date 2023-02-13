#include<iostream>
using namespace std;
int main()
{
	string s1="Hello";
	string s2="world";
	string s3;
	int len;
	
	len=s1.size();
	cout<<"\n String size : "<<len;
	
	s3=s1;
	cout<<"\n String copy : "<<s3;
	
	string s4=s1+s2;
	cout<<"\n String concatination : "<<s4;
	
	return 0;
	
}
