#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Pleace enter your Ascil number(0<=number<=127): ";
	int a=0;
	cin>>a;
	if(a<=127&&a>=0)
	{
		cout<<"The letter is "<<static_cast<char>(a)<<endl;
	}
	else
	cout<<"your number is wrong";
	return 0;
 } 
