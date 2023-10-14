#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	string number[]={"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	string color[]={"Clubs","Diamonds","Heard","Spades"};
	int a=rand()%13;
	int b=rand()%4;
	cout<<"The card you pick is "<<number[a]<<" of "<<color[b]<<endl;
	return 0;
}
