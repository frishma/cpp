#include<bits/stdc++.h>
using namespace std;
int main()
{	int H[10];
	for(int i=0;i<10;i++)
	{

	cout<<"第"<<i+1<<"个桃子的高度(100<=H<=200)"<<endl;
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
	cout<<"请输入他的身高加臂长(100<=m<=120)"<<endl;
	int m=0;
	cin>>m;
	int n=0;
	
	while(H[n]<m+30)
	{
	n++;
	continue;
	}
	cout<<"他能摘"<<n<<"个桃子"<<endl; 

	return 0;
}
