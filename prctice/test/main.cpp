#include<iostream>
#include<string.h>
#include<iomanip>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 1000    //图书表可能达到的最大长度
using namespace std;
typedef struct
{//图书信息定义
    char no[20];    //图书ISBN
    char name[50];   //图书名字
    float price;   //图书价格
}Book;
typedef struct
{//图书表的顺序存储结构类型为SqList
    Book *elem;                   //存储空间的基地址
    int length;                   //图书表中当前图书个数
}SqList;
int InitList_Sq(SqList &L)
{//构造一个空的顺序表L
    L.elem=new Book[MAXSIZE];     //为顺序表分配一个大小为MAXSIZE的数组空间
    if(!L.elem)exit(OVERFLOW);    //存储分配失败退出
    L.length=0;                   //空表长度为0
    return OK;
}
int Input_Sq(SqList &L)
{//顺序表的输入
//**************begin************/
 while(true)
 {
 	if(L.length==MAXSIZE)
 	{
 		return ERROR;
	 }
	 cout<<"If you have finished the input of the book, please enter 0 0 0"<<endl;
	 cout<<"Please input the ISBN of the book: "<<endl;
	cin>>L.elem[L.length].no; 
	while(L.elem[L.length].no !="0 0 0")
	{
	cout<<"Please input the name of the book: "<<endl;
	cin>>L.elem[L.length].name;
	cout<<"Please input the price of the book: "<<endl;
	cin>>L.elem[L.length].price;
	L.length++;
	}
	break;

 }
    /**************end************/
}
int Output_Sq(SqList L)
{//顺序表的输出
/**************begin************/
  cout<<L.length<<endl;
  for(int i=0;i<L.length;i++)
  {
  	cout<<L.elem[i].no<<" "<<L.elem[i].name<<" "<<L.elem[i].price<<endl;
  }

    /**************end************/
}
int main()
{
    SqList L;                   //定义一个SqList类型的变量L
    InitList_Sq(L);             //初始化一个空的顺序表L
    Input_Sq(L);                //输入数据
    Output_Sq(L);               //输出数据
    return 0;
}
