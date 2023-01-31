#include<iostream>
using namespace std;
class Sample
{
	private:
	float num1,num2;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>num1;
			cout<<"\n Enter Second Number : ";
			cin>>num2;
		}
		friend float mean(Sample);
};
float mean(Sample s)
{
	return (s.num1+s.num2)/2;
}
int main()
{
	Sample s1;
	s1.getdata();
	cout<<"\n Mean Value : "<<mean(s1);
	return 0;
}
