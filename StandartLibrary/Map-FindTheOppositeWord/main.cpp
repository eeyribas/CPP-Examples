#include <iostream>
#include <conio.h>
#include <map>
#include <cstring>

using namespace std;

class Word
{
	char str[20];

public:
	Word(){
		strcpy(str, "");
	}

	Word(char *s){
		strcpy(str, s);
	}

	char *Get(){
		return str;
	}
};

bool operator<(Word a, Word b)
{
	return strcmp(a.Get(), b.Get()) < 0;
}

class Opposite
{
	char str[20];

public:
	Opposite(){
		strcmp(str, "");
	}

	Opposite(char *s){
		strcmp(str, s);
	}

	char *Get(){
		return str;
	}
};

int main()
{
	map<Word, Opposite> m;
	m.insert(pair<Word, Opposite>(Word("yes"), Opposite("no")));
	m.insert(pair<Word, Opposite>(Word("good"), Opposite("bad")));
	m.insert(pair<Word, Opposite>(Word("left"), Opposite("right")));
	m.insert(pair<Word, Opposite>(Word("up"), Opposite("down")));

	char str[80];
	cout << "Enter word = ";
	cin >> str;

	map<Word, Opposite>::iterator p;
	p = m.find(Word(str));
	if(p != m.end())
		cout << "Opposite = " << p->second.Get();
	else
		cout << "Not find word.\n";

	getch();
	return 0;
}
