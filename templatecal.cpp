#include<iostream>
using namespace std;
template <class T>
class cal
{
	T num1,num2;
	public:
		cal(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
		void display()
		{
			cout<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
			cout<<num1<<"-"<<num2<<"="<<sub(num1,num2)<<endl;
			cout<<num1<<"*"<<num2<<"="<<mul(num1,num2)<<endl;
			cout<<num1<<"/"<<num2<<"="<<div(num1,num2)<<endl;
		}
		
		T add(T num1,T num2)
		{
			return num1+num2;
		}
		T sub(T num1, T num2)
		{
			return num1-num2;
		}
		T mul(T num1 , T num2)
		{
			return num1*num2;
		}
		T div(T num1, T num2)
		{
			return num1/num2;
		}
	
};
int main()
{
	cal <int> c(20,10);
	c.display();
	cout<<"\n float value : ";
	cal <float> d(10.2,2.2);
	d.display();
	return 0;
	
}
