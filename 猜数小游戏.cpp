#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"����1��100�в�һ������.����ʮ�λ���"<<endl; 
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
			cout<<"�����������ֵ����"<<endl; 
		}
		else if(val<a){
			cout<<"�����������ֵ��С"<<endl; 
		}
		else
		{
			cout<<"�ش���ȷ"<<endl; 
			break;
		}
		
		
	}
	if(b<11)
	{cout<<"��ϲ����"<<endl; 
	}
	else
	{
		cout<<"��սʧ��,����¬�����΢��ת�ˣ�����С����Ԫ"<<endl; 
		cout<<"��ȷ��Ϊ��"<<a<<endl;
	}

	return 0;
}

