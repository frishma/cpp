#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Using A C T G enter a gene code"<<endl;
	string gene;
	cin>>gene;
	int l=gene.size();
	int i=0,current=0;
	if(l%3==0)
	{
		while(i<l)
		{
			int m=gene.find("ATG",current);
			if(m!=string::npos)
			{
				current=m;
				int d=gene.find("TAG",current);
				int f=gene.find("TAA",current);
				int g=gene.find("TGA",current);
				if(d!=string::npos&&(f==string::npos||d<f)&&(g==string::npos||d<g))
				{
					
					cout<<gene.substr(current+3,d-current-3);
					i=d+3;
				}
				else if(f!=string::npos&&(d==string::npos||f<d)&&(g==string::npos||f<g))
				{
					cout<<gene.substr(current+3,f-current-3);
					i=f+3;
				}
				else if(g!=string::npos&&(f==string::npos||g<f)&&(d==string::npos||g<d))
				{
					cout<<gene.substr(current+3,g-current-3);
					i=g+3;
				}
				else
				cout<<"NO"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
		
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
