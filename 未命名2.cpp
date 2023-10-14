#include<bits/stdc++.h>
using namespace std;
string bin2Dec(const string& binaryString);

int main()
{
	string number="";
	cin>>number;
	bin2Dec(number);
	return 0;
}
string bin2Dec(const string &binaryString)
{   int t=0;
	int m=binaryString.size();
	for(int i=0;i<m;i++)
	{
		int a=static_cast<int>(binaryString[i])-48;
		t=2*t+a;
	}
	cout<<t<<endl;
	return 0;
}
