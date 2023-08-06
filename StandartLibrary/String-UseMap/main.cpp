#include <iostream>
#include <conio.h>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, string> m;
	m.insert(pair<string, string>("yes", "no"));
	m.insert(pair<string, string>("up", "down"));
	m.insert(pair<string, string>("left", "right"));
	m.insert(pair<string, string>("good", "bad"));

	string s;
	cout << "Enter word = ";
	cin >> s;

	map<string, string>::iterator p;
	p = m.find(s);
	if(p != m.end())
		cout << "Opposite = " << p->second;
	else
		cout << "Not found.";

	getch();
	return 0;
}
