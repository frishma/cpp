#include<bits/stdc++.h>

using namespace std;
int main()
{
cout<<"please ent the number ddd-dd-dddd"<<endl;
char number[]="";
cin>>number;
bool nb;
if(strlen(number)==11 && number[3]=='-'&&number[6]=='-')
{
	for(int i=0;i<11;i++)
	{
		if(i==3||i==6)
		{
			continue;
		}
		if(isdigit(number[i]))
		{
			nb=true;
		}
		else 
		nb=false;
	}
}
else
nb=false;
if (nb) {
            cout << number << " is a valid social security number" << endl;
        }
		 else 
		{
            cout << number << " is an invalid social security number" << endl;
        }
 return 0;
}
