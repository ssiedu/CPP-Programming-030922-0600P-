#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<"Bitwise AND : "<<(a&b)<<endl;
	cout<<"Bitwise OR  : "<<(a|b)<<endl;
	cout<<"BItwise NOT : "<<(~a)<<endl;
	cout<<"Bitwise XOR : "<<(a^b)<<endl;
	cout<<"Left shift : "<<(a<<1)<<endl;
	cout<<"Rigth shift : "<<(a>>1)<<endl;
	return 0;
}
