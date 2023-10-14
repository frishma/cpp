#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cin>>i;
		double num=0.0;
	for(int a=1;a<=i;a++)
	{
	
		num+=4*pow(-1,a+1)*(1.0/(2*a-1));
	}
	cout<<num<<endl;
	
	return 0;
}
