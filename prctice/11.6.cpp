#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int* counts(const string* s)
{
    int* m = new int[10]();
    int size = s->size();
    for (int i = 0; i < 10; i++)
    {
        int current = 0;
        while (current < size)
        {
            stringstream ss;
            ss << i;
            int pos= s->find(ss.str(), current);
            if (pos != string::npos)
            {
                m[i]++;
                current++;
            }
            else
            {
                current = size;
            }
        }
    }
    for (int n = 0; n < 10; n++)
    {
        if (m[n] != 0)
        {
            cout << "Content" << n << "is" << m[n] << endl;
        }
    }

    return m;
}

int main()
{
    cout << "Enter" << endl;
    string pass;
    cin >> pass;
    int* en = counts(&pass);
    delete[] en;

    return 0;
}
