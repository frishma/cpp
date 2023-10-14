#include<bits/stdc++.h>
using namespace std;
void shuffle(string &s);
int main()
{
	string leller="";
	cin>>leller;
	shuffle(leller);
	return 0; 
}
void shuffle(string &s)
{
   srand(time(0));
   char mid;
   int a=s.size();
   for(int i=0;i<a;i++)
   {
   	int m=rand()%a;
   	mid=s[m];
   	s[m]=s[i];
   	s[i]=mid;
   }
   cout<<s<<endl;
}

