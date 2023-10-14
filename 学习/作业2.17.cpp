#include<bits/stdc++.h>
using namespace std;
int main()
{
	double t,t1,v;
	cout<<"Ent the temperature in Fahrenheit.t1=(At least 2mph)"<<endl;
	cin>>t1;
	cout<<"Ent the wind speece in miles per hour.v=(At least -58;Up tp 41)"<<endl;
	cin>>v;
	t=35.74+0.6215*t1-35.75*pow(v,0.16)+0.4275*t1*pow(v,0.16);
	cout<<"The wind chill index is"<<t<<endl;
	return 0;
} 
