#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"like ax^2+bx+c=0, please enter the a b c"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	int d=pow(b,2)-4*a*c;
	if(d>0)
	{
		cout<<"x1="<<(-b+sqrt(d))/(2*a)<<endl;
		cout<<"x2="<<(-b-sqrt(d))/(2*a)<<endl;
	}
	else if(d==0)
	{
		cout<<"x="<<(-b)/(2*a)<<endl;
	}
	else
	{
		cout<<"The equation has no real roots."<<endl;
    }
	return 0;
}
