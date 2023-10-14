#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double ta,v;
	cout<<"Enter the temperature i n Fahrenheit(higest is 41,lowest is -58):";
	cin>>ta;
	cout<<"Enter the wind speed in miles per hour(up to 2):";
	cin>>v;
	if(ta>=-58&&ta<=41&&v>=2)
	{
		cout<<"The wind chill index is: "<<35.74+0.6215*ta-35.75*pow(v,0.16)+0.4275*ta*pow(v,0.16);
	}
	return 0;
}
