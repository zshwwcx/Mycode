#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

void main()
{
	using namespace std;
	ofstream fout("test.txt");
	double dom = 11.34;
	string tem = "hello";
	int ten = 10;
	if (fout.is_open())
	{
		fout.write(ten, sizeof(ten));
		fout.write(dom, sizeof(dom));
		fout.write(tem, sizeof(tem));
		fout.close();
	}
	ifstream fin("text.txt");
	if (fin.is_open())
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
		fin.close();
	}
	return 0;
}