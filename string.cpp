#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[6]="Hello";
	char s2[6]="World";
	char s3[10];
	int len;
	
	len=strlen(s1);
	cout<<"\n length of string : "<<len;
	
	strcpy(s3,s2);
	cout<<"\n Copy String : "<<s3;
	
	cout<<"\n Upper case string : "<<strupr(s1);
	cout<<"\n lower case string : "<<strlwr(s1);
	
	if(strcmp(s1,s2)==0)
		cout<<"\n Strings are equal";
	else
		cout<<"\n Strings are not equal ";
		
	strcat(s1,s3);
	cout<<"\n String Concatination : "<<s1;
	
	return 0;
		
	
}
