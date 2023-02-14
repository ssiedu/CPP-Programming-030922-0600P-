#include<iostream>
using namespace std;
template<class T>
class Number
{
	T num;
	public:
		Number(T n)
		{
			num=n;
		}
		T getnumber();
		/*T getnumber()
		{
			return num*num;
		}*/
};
template <class T>
T Number<T>::getnumber()
{
	return num*num;
}


int main()
{
	Number <int> obj1(10);
	cout<<"\n Number is : "<<obj1.getnumber();
	Number <float> obj2(4.2);
	cout<<"\n float value : "<<obj2.getnumber();
	return 0;
}
