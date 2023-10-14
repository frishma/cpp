#include<bits/stdc++.h>
using namespace std;
int main()
{
/*int num[3];
for(int a=0;a<=3;a++)
{
	cin>>num[a];
}
srand(time(0));
for(int i=0;i<=3;i++)
{
	int w=rand()%(4);
	swap(num[i],num[w]);
}
for(int b=0;b<=3;b++)
{
	cout<<num[b]<<endl;;
}*/
char sum[]="";
cin>>sum;
int h;
h=strlen(sum);
srand(time(0));
int same[]={0};
for(int a=0;a<h;a++)
{
	char m;
  Loop:  int i=rand()%(h-3);
    same[a]=i;
   //for(int q=0;q<a+1;q++)
   // {
    /*	if(i==same[q])
    	{
    		goto Loop;
		}
	}*/
    sum[a]=sum[i];
}
cout<<sum<<endl;
return 0;
}
	

