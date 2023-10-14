#include<iostream>
using namespace std;
int main()
{
	double a,v;
	cout<<"Enter speed and accration:"<<endl;
	cin>>a>>v;
	cout<<"The minimum runway length for this airplane is "<<v*v/(2*a)<<endl;
	return 0;
}
