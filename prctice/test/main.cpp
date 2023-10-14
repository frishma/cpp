#include<iostream>
#include<string.h>
#include<iomanip>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 1000    //ͼ�����ܴﵽ����󳤶�
using namespace std;
typedef struct
{//ͼ����Ϣ����
    char no[20];    //ͼ��ISBN
    char name[50];   //ͼ������
    float price;   //ͼ��۸�
}Book;
typedef struct
{//ͼ����˳��洢�ṹ����ΪSqList
    Book *elem;                   //�洢�ռ�Ļ���ַ
    int length;                   //ͼ����е�ǰͼ�����
}SqList;
int InitList_Sq(SqList &L)
{//����һ���յ�˳���L
    L.elem=new Book[MAXSIZE];     //Ϊ˳������һ����СΪMAXSIZE������ռ�
    if(!L.elem)exit(OVERFLOW);    //�洢����ʧ���˳�
    L.length=0;                   //�ձ���Ϊ0
    return OK;
}
int Input_Sq(SqList &L)
{//˳��������
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
{//˳�������
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
    SqList L;                   //����һ��SqList���͵ı���L
    InitList_Sq(L);             //��ʼ��һ���յ�˳���L
    Input_Sq(L);                //��������
    Output_Sq(L);               //�������
    return 0;
}
