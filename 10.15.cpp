#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
    string words[4]={"write", "number", "card", "banning"};
	int a=rand() % 4;
	string s=words[a];
	int pa=0;
	int i=words[a].size();
	string missle=string(i,'*');
		int g=0;
    while(true)
    {	bool op=false;
    	cout<<"Enter a letter in word "<<missle<<">";
    	char h;	
        cin>>h;
    	for(int m=0;m<i;m++)
    	{
    		if(s[m]==h&&missle[m]!=h)
    		{
    			op=true;
    			missle[m]=h;
    			break;
			}
			else if(s[m]==h&&missle[m]==h)
			{
				for(int w=m+1;w<i;w++)
				{
					if(s[w]==h)
					{
						missle[w]=h;
					}
					else
					{
					++g;
					cout<<h<<"is alreadry in the word"<<endl;
					break;
					}
				}
				op=true;
				break;
			}
		}
	if(!op)
	{
		cout<<h<<"is not in the word"<<endl;
	}
	if(missle==s)
	{
		cout << "Congratulations! You guessed the word!" << endl;
            cout << "You made " << g << " incorrect guesses." << endl;
            cout << "Do you want to play again? (y/n)" << endl;
            char mid;
            cin>>mid;
            if(mid=='n')
            {
            	break;
			}
			else if(mid=='y')
			{
				a=rand() % 4;
				s=words[a];
				i=words[a].size();
				 missle=string(i,'*');
				 g=0;
			}
	}
	}
	return 0;
	}


