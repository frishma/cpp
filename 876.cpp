#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[5];
for(int a=0;a<=5;a++)
{
	cin>>arr[a];
}
for(int c=0;c<5;c++)
{
	for(int i=c;i<5;i++)
	{
		if(arr[c]>arr[i+1])
		{
			swap(arr[c],arr[i+1]); 
		}
	}
}
for(int v=0;v<=5;v++)
{
	cout<<"arr"<<"["<<v<<"]"<<"="<<arr[v]<<endl;
}
	return 0;
}

