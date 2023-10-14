#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool isPalindrome(const string& s);
int main()
{
	string s;
	cout<<"Enter a string s : ";
	cin>>s;
	isPalindrome(s);
	return 0;
}
bool isPalindrome(const string &s)
{
	int a=s.size();
	bool name=true;
	for(int i=0,l=a-1;i<=a;i++,l--)
	{
		if(static_cast<int>(s[i])!=static_cast<int>(s[l])&&fabs(static_cast<int>(s[i])-static_cast<int>(s[l]))!=32)
		{
		cout<<"no"<<endl;
		name=false;
		return false;	
		}
	}
	if(name)
	cout<<"tes"<<endl;
	return true;
}
