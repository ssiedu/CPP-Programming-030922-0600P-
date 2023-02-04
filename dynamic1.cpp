#include<iostream>
using namespace std;
int main()
{
	//declaration of variable
	int *iptr;
	float *fptr;
	
	iptr=new int;
	fptr=new float;
	
	*iptr=100;
	*fptr=123.44;
	
	cout<<"\n integer value : "<<*iptr;
	cout<<"\n float value  : "<<*fptr;
	
	delete iptr;
	delete fptr;
	
	return 0;
	
}
