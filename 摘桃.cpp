#include<bits/stdc++.h>
using namespace std;
int main()
{	int H[10];
	for(int i=0;i<10;i++)
	{

	cout<<"��"<<i+1<<"�����ӵĸ߶�(100<=H<=200)"<<endl;
	cin>>H[i]; 
	}
	for(int b=1;b<=10;b++)
	{
		for(int a=0;a<10-b;a++)
		{
			if(H[a]>H[a+1])
			{
			int sum=0;
			sum=H[a];
			H[a]=H[a+1];
			H[a+1]=sum;
			}
		}
	}
	cout<<"������������߼ӱ۳�(100<=m<=120)"<<endl;
	int m=0;
	cin>>m;
	int n=0;
	
	while(H[n]<m+30)
	{
	n++;
	continue;
	}
	cout<<"����ժ"<<n<<"������"<<endl; 

	return 0;
}
