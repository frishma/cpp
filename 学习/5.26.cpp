#include<bits/stdc++.h>
using namespace std;
int main()
{
	double sum=0;
	for(int i=3;i<100;i=i+2)
	{
		sum=+(float)(i-2)/i;
	}
	cout<<sum<<endl;
	return 0;
}
