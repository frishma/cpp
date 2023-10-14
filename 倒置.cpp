#include<iostream>
using namespace std;
int main()
{
	int arr[]={12,32,45,67,232};
for(int a=0;a<=5;a++)
{
int start=0;
int end=4;
while (end>start)
{
	a=arr[start];
	arr[start]=arr[end];
	arr[end]=a;
	start++;
	end--;
}}
for(int i=0;i<=4;i++)
cout<<arr[i]<<endl;
return 0;	
 } 
