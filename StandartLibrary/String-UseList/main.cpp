#include <iostream>
#include <conio.h>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> str;
	str.push_back(string("one"));
	str.push_back(string("two"));
	str.push_back(string("three"));
	str.push_back(string("four"));
	str.push_back(string("five"));
	str.push_back(string("six"));
	str.push_back(string("seven"));
	str.push_back(string("eight"));
	str.push_back(string("nine"));
	str.push_back(string("ten"));

	str.sort();
	list<string>::iterator p = str.begin();
	while(p != str.end())
    {
		cout << *p << " ";
		p++;
	}

	getch();
	return 0;
}
