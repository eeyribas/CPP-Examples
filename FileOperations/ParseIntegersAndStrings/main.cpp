#include <iostream>
#include <fstream>
#include <cctype>
#include <conio.h>

using namespace std;

int main()
{
	ofstream out("test", ios::out | ios::binary);
	if (!out) {
		cout << "Not Found.\n";
		return 1;
	}
	out << 123 << " this a test " << 23;
	out << " Hello World !" << 99 << " sdf " << endl;
	out.close();

	ifstream in("test", ios::in | ios::binary);
	if (!in) {
		cout << "Not Found.\n";
		return 1;
	}

	char ch, str[80], *p;
	do {
		p = str;
		ch = in.peek();
		if (isdigit(ch)) {
			while (isdigit(*p = in.get()))
                p++;
			in.putback(*p);
			*p = '/0';
			cout << "Integer = " << atoi(str);
		} else if (isalpha(ch)) {
			while (isalpha(*p=in.get()))
                p++;
			in.putback(*p);
			*p = '/0';
			cout << "String = " << str;
		} else {
		    in.get();
		}
		cout << "\n";
	} while (!in.eof());

	in.close();

	getch();
	return 0;
}
