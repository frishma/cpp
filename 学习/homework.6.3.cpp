#include<bits/stdc++.h>
using namespace std;
int reverse(int number);
bool ispalindrome(int number);
int main()
{
	int number;
	cin>>number;
	ispalindrome(number);
	return 0;
}
int nerverse(int number)
{
	char middle[]="";
	itoa(number,middle,10);
	int n=strlen(middle);
	for(int a=0,b=n-1;a<b;a++,b--)
	{
		char m;
		m=middle[a];
		middle[a]=middle[b];
		middle[b]=m;
	}
	long long t=atoi(middle);
	return t;
}
bool ispalindrome(int number)
{	
    int tr=nerverse(number);
	if(tr==number)
	{
	cout<<"Yes"<<endl;
	return true;
	}
	else
	{
	cout<<"No"<<endl;
	return false;
	}
}

