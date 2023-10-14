#include<iostream>
using namespace std;
int main()
{
	int arr[]={187,2324,4234,434,566};
	int a=0;
	int c=0;
	for(int b=0;b<=5;b++)
	{
		if(arr[a]>c)
		{
			c=arr[a];
			a++;
		}
	}
	cout<<c<<endl;
}
