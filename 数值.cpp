#include<iostream>
int main()
{
	using namespace std;
	float A=3.12f;
	double B=9.775;
	cout<<A<<endl;
	cout<<B<<endl;
	cout<<A+B<<endl;
	double f1=6e-3;//用作 科学计数法6*0.1^3 
	double f2=6e2;//6*10^2
	cout<<"f2="<<f2<<endl;
	cout<<"f1="<<f1<<endl;
	return 0;
}
//e后为正底数是十 e后为负 底数为0.1 
