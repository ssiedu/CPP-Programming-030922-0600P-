#include<iostream>
using namespace std;
int sum(int fnum,int snum)
{
	return fnum+snum;
}

int sum(int fnum,int snum,int tnum)
{
	return fnum+snum+tnum;
}

float sum(float fnum,float snum)
{
	return fnum+snum;
}

float sum(float fnum,int snum)
{
	return fnum+snum;
}

int main()
{
	cout<<"\n Function with two integer value : "<<sum(10,20);
	cout<<"\n function with three integer value : "<<sum(10,20,30);
	cout<<"\n Function with two float value : "<<sum(2.3f,5.5f);
	cout<<"\n Function with different argument : "<<sum(12.3f,10);
	return 0;
}
