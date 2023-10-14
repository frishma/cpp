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
struct man man1={"李广",28,98};
cout<<"姓名："<<man1.name<<" 年龄："<<man1.age<<" 杀敌："<<man1.score <<endl;
return 0;	
}*/
/*int main()
{
	struct man man1;
	man1.age =89;
	man1.name="李广";
	man1.score =9897;
	 cout<<"姓名："<<man1.name<<" 年龄："<<man1.age<<" 杀敌："<<man1.score <<endl;
	 return 0;
}*/
int main()
{
	struct man sign[3]
	{ {"过",28,98},
	  {"靖",28,98},
	  {"令",12,87} 
	};
	for(int i=0;i<3;i++)
	{
	cout<<" 姓名："<<sign[i].name<<"";
	}
	cout<<endl;
	sign[2].score=87;
	for(int a=0;a<3;a++)
	{
		cout<<" 分数："<<sign[a].score<<endl; 
	}
	return 0;
}
