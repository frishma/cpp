#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"请在1到100中猜一个数字.你有十次机会"<<endl; 
	srand((unsigned int)time(NULL));

	int a=rand() % 100+1;
	int val=0;
	int b=1;
	while(b<6)
	{
		b++;
		cin>>val;
		if(val>a)
		{
			cout<<"您所输入的数值过大"<<endl; 
		}
		else if(val<a){
			cout<<"您所输入的数值过小"<<endl; 
		}
		else
		{
			cout<<"回答正确"<<endl; 
			break;
		}
		
		
	}
	if(b<11)
	{cout<<"恭喜过关"<<endl; 
	}
	else
	{
		cout<<"挑战失败,请向卢义豪的微信转账，金额不得小于五元"<<endl; 
		cout<<"正确答案为："<<a<<endl;
	}

	return 0;
}

