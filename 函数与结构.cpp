#include<bits/stdc++.h>
using namespace std;
struct intnet 
{
	string name;
	int age;
	int score;
};
void print(intnet s)
{
	cout<<"姓名是"<<s.name<<" 年龄是"<<s.age<<" 杀敌"<<s.score<<endl;
}
int main()
{
	struct intnet s={"秋华君",17,98 
	};
	print(s);
	return 0;
}
