#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int arr[9]={8,1,2,6,5,3,7,0,4};

		for(int a=1;a<9;a++)
{
	for(int b=0;b<9-a;b++)
	{
		if(arr[b]>arr[b+1])
		 {
		int num=arr[b];
		arr[b]=arr[b+1];
		arr[b+1]=num;
	}
	}
}
	for(int i=0;i<=8;i++)
	cout<<arr[i]<<" ";
	return 0;
}

