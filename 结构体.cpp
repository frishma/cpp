#include<bits/stdc++.h>
using namespace std;
struct man
{
string name;
int age;
int score;
};
/*int main()
{
struct man man1={"���",28,98};
cout<<"������"<<man1.name<<" ���䣺"<<man1.age<<" ɱ�У�"<<man1.score <<endl;
return 0;	
}*/
/*int main()
{
	struct man man1;
	man1.age =89;
	man1.name="���";
	man1.score =9897;
	 cout<<"������"<<man1.name<<" ���䣺"<<man1.age<<" ɱ�У�"<<man1.score <<endl;
	 return 0;
}*/
int main()
{
	struct man sign[3]
	{ {"��",28,98},
	  {"��",28,98},
	  {"��",12,87} 
	};
	for(int i=0;i<3;i++)
	{
	cout<<" ������"<<sign[i].name<<"";
	}
	cout<<endl;
	sign[2].score=87;
	for(int a=0;a<3;a++)
	{
		cout<<" ������"<<sign[a].score<<endl; 
	}
	return 0;
}
