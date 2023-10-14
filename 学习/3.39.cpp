#include<bits/stdc++.h>
using namespace std;
int bin2Dec(const string& binaryString);
int main()
{
	string number;
	cin>>number;
	cout<<bin2Dec(number)<<endl;
	return 0;
}
int bin2Dec(const string& binaryString) 
{  
	int sum=0;
	int a=binaryString.length();
		for(int i=0;i<a;i++)
		{
			sum=sum+(int)(binaryString[i]-'0')*pow(2,a-i-1);
		}
			return sum;

	}

