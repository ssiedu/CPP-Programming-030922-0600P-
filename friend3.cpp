#include<iostream>
using namespace std;
class Class2;
class Class1
{
	int v1;
	public:
		void setvalue(int a)
		{
			v1=a;
		}
		void display()
		{
			cout<<"\n value1 : "<<v1;
		}
		friend void Exchange(Class1 &,Class2 &);
};
class Class2
{
	int v2;
	public:
		void setvalue(int b)
		{
			v2=b;
		}
		void display()
		{
			cout<<"\n value2 : "<<v2;
		}
		friend void Exchange(Class1 &,Class2 &);
};

void Exchange(Class1 &m,Class2 &n)
{
	int temp = m.v1;
	m.v1 = n.v2;
	n.v2 =  temp;
}
int main()
{
	Class1 c1;
	Class2 c2;
	c1.setvalue(100);
	c2.setvalue(200);
	cout<<"\n Before function call : "<<endl;
	c1.display();
	c2.display();
	Exchange(c1,c2);
	cout<<"\n After Function call : "<<endl;
	c1.display();
	c2.display();
	return 0;
	
	
	
	
	
	
	
}








