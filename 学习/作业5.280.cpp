#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cin>>i;
	double e=0;
	double sum=1.0;
	for(int a=1;a<=i;a++)
	{
		for(int b=1;b<=a;b++)
		{
			sum=sum*(1.0/b);
		}
		e+=sum;
	}
	cout<<e<<endl;
	return 0;
}
