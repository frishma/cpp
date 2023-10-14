#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[2][3]=
	{
		{2,8,7},
		{4,2,2}
	};
/*	for(int a=0;a<=1;a++)
	{
		for(int b=0;b<=2;b++)
		{
			cout<<arr[a][b]<<" ";
		}		
	cout<<endl; 
	}
	int arr[2][3]={1,2,3,4,4,5};
		for(int a=0;a<=1;a++)
	{
		for(int b=0;b<=2;b++)
		{
			cout<<arr[a][b]<<" ";
		}		
	cout<<endl; 
	}*/
	
	string names[]={"张三","李四"};
	for(int a=0;a<2;a++)
	{
		int sum=0;
		for(int b=0;b<3;b++)
		{
	
		sum+=arr[a][b];
		}
		cout<<names[a]<<"的总数是"<<sum<<endl; 
	}
	return 0;
}
