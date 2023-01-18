#include<iostream>
using namespace std;
int main()
{
	float per;
	cout<<"\n Enter percentage in between 1-100 : ";
	cin>>per;
	
	if(per<=100 && per>=85)
		cout<<"A Grade";
	else if(per< 85 && per>=70)
		cout<<"B Grade";
	else if(per<70 && per>=60)
		cout<<"C Grade";
	else if(per<60 && per>=50)
		cout<<"D Grade";
	else if(per <50 && per>=40)
		cout<<"E Grade";
	else 
		cout<<"Fail";
		
	return 0;
}
