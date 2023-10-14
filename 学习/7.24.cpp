#include<bits/stdc++.h>
using namespace std;
bool isConsecutiveFour(const int values[],int size);
int main()
{
	cout<<"Enter the number of values : ";
	int n;
	cin>>n;
	int number[n];
	for(int i=0;i<n;i++)
	{
		cin>>number[i];
	}
	if(isConsecutiveFour(number,n))
	cout<<"on";
	else
	cout<<"uo";
	return 0;
}
bool isConsecutiveFour(const int values[],int size)
{
	for(int a=0;a<size-3;a++)
	{
		if(values[a]==values[a+1]==values[a+2]==values[a+3])
		{
			return true;
		}	
	}
	return true;
}
