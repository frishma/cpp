#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
void showmenu()
{
	cout<<"*******************************"<<endl;
 	cout<<"******   1、显示联系人   ******"<<endl;
	cout<<"******   2、删除联系人   ******"<<endl;
	cout<<"******   3、查找联系人   ******"<<endl;
	cout<<"******   4、修改联系人   ******"<<endl;
	cout<<"******   5、清空联系人   ******"<<endl;
	cout<<"******   6、退出通讯录   ******"<<endl;
	cout<<"*******************************"<<endl;
}
struct person
{
	string N_name;
	int N_sex;
	int N_age;
	string N_phone;
	string N_address;
};
struct addressbook
{
	struct person personArray[MAX];
	int N_size; 
};
void addperson(addressbook*abs)
{
	if(abs->N_size==MAX)
	{
		cout<<"It is full"<<endl;
		return;
	}
	else
	{
		string name;
		cout<<"Pleace enter name"<<endl;
		cin>>name;
		abs->personArray[abs->N_size].N_name=name;
		cout<<"Enter your sex"<<endl;
		cout<<"1--man"<<endl;
		cout<<"2--woman"<<endl;
		int sex=0;
		while(true)
		{
			cin>>sex;
			if(sex==1||sex==2)
			{
				abs->
			}
		}
	}
}
int main()
{
	cout<<"Pleace select the opation in the following"<<endl;
	showmenu();
	int select=0;
	cin>>select;
    addressbook abs;
    
	while(true)
	{
		switch(select)
	{
		case 1:
			addperson(&abs);
		    break;
		case 2:
		    break;
		case 3:
		    break;
		case 4:
		    break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout<<"Welcome to using next time"<<endl;
	}
	}
	return 0;
}
