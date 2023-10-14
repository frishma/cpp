#include<iostream>
#include<cmath>
using namespace std;
int bin2Dec(const string& binaryString);
int main()
{
	string number;
	cin>>number;
	cout<<"number="<<bin2Dec(number);
	return 0;
}
int bin2Dec(const string& binaryString)
{
	int sum=0;
	int s=binaryString.length();
	for(int i=0;i<s;i++)
	{
		sum+=(binaryString[i]-'0')*pow(2,s-i-1);
	
	}
	return sum;
}
