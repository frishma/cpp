#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,v,length;
	
	cout<<"Please enter the acceleration of the aircraft."<<endl;
	cin>>a;
	cout<<"Please enter the initial speece of the aircraft."<<endl;
	cin>>v;
	length=v*v/2*a;
	cout<<"The minimum runway length for this airplane is "<<length<<endl;
	return 0;
}
