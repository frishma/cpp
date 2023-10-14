#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"Enter an integer, the input ends if it is "<<endl;
	int arr[100]={0};
    for(int a=0;1;a++)
{
	cin>>arr[a];
	if(arr[a]==0)
	{
	break;
	}
}
int high=0;
int low=0;

for(int b=0;1;b++)
{
	if( arr[b]>0)
	{
		high++;
	}
	else if(arr[b]<0)
	{
	low++;
	}
	else
	{
		break;
	}
}
cout<<"The number of positives is "<<high<<endl;
cout<<"The number of negatives is "<<low<<endl;
int sum=0;
double m=0;
for(int s=0;1;s++)
{
 sum=sum+arr[s];
 if(arr[s]==0)
{
m=sum/s;
cout<<"The totle is"<<sum<<endl;
cout<<"The average is"<<m<<endl;
break;}

}


	return 0;
}
