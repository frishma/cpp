#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double PI=0.0;
	int t;
	cout<<"Enter t ";
	cin>>t;
	for(int i=1;i<t+1;i++)
	{
		PI+=1.0/(2*i-1)*pow(-1,i+1)*4;
	}
	cout<<PI;
	return 0;
}
