#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[11]={3,2,6,7,4,1,98,24,35,64,24};
	for(int a=1;a<=10;a++)
	{
		for(int b=0;b<=11-a;b++)
		{
			if(arr[b]<arr[b+1])
			{
				int num=arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=num;
				
			}
		}
	}
	for(int i=0;i<=10;i++)
	{
		cout<<arr[i]<<" "; 
	}
	return 0;
}
