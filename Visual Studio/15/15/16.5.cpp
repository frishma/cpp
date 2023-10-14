#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string file1, file2;
	cout << "Enter your file that you want to encrypt" << endl;
	cin >> file1;
	cout << "Enter name of encrypted file" << endl;
	cin >> file2;
	fstream aput(file1, ios::in);
	fstream bput(file2, ios::out);
	char m;
	while (aput.get(m))
	{
		m -= 5;
		bput.put(m);
	}
	aput.close();
	bput.close();
	return 0;
}