#include<iostream>
#include<iomanip>
#include"Bank.h"
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
Bank bank1;
 Bank Bank(a,b,c);
 cout<<bank1.getTotalPayment();
 return 0;
}
