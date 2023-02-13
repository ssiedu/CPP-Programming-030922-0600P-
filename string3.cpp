#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[10];
	char s2[10];
	
	cout<<"\n Enter First String : ";
	cin.getline(s1,6);
	cout<<"\n Enter Second String : ";
	cin.getline(s2,6);
	
	strcat(s1,s2);
	cout<<"\n string concatenate : "<<s1;
	return 0;
}
