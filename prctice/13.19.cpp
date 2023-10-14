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
	fstream output(file1, ios::out);
	output << "My code must be right" << endl;
	output.close();
	fstream onput(file1, ios::in);
	fstream putput(file2, ios::out);
	char m;
	while (onput.get(m))
	{
		m += 5;
		putput.put(m);
	}
	onput.close();
	putput.close();
	return 0;
}
