#include<bits/stdc++.h>
using namespace std;
int main()
{	int k=0;
    cin>>k;
	for(int n=1;n>0;n++)
	{
		double Sn=0;
		Sn=1/n+Sn;
		if(Sn>=k)
		{cout<<n<<endl;
		break;
		}
    }
	return 0;
}
