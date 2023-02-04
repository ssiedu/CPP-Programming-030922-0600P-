#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter Number of student : ";
	cin>>num;
	
	float *ptr;
	ptr=new float[num];
	
	cout<<"\n Enter percentage of student : ";
	for(int i=0;i<num;i++)
	{
		cout<<"\n Student "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	
	cout<<"\n Print Details of students : ";
	for(int i=0;i<num;i++)
	{
		cout<<"\n Student "<<i+1<<" : "<<*(ptr+i);
	}
	
	delete [] ptr;
	return 0;
}
