#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
char *filename="Binary";
int main()
{
	ofstream fout(filename);
	float h[4]={12.33,123.48,12.78,145.67};
	int i;
	fout.write((char*)&h,sizeof(h));
	fout.close();
	ifstream fin(filename);
	for(i=0;i<4;i++)
	//h[i]=0;
	fin.read((char*)&h,sizeof(h));
	
	for(i=0;i<4;i++)
	{
		cout<<fixed;
		cout<<setw(10)<<setprecision(2)<<h[i];
	}
	fin.close();
	return 0;
}
