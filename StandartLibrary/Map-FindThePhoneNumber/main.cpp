#include <iostream>
#include <conio.h>
#include <map>
#include <cstring>

using namespace std;

class Name
{
	char str[20];

public:
	Name(){
		strcpy(str, "");
	}

	Name(char *s){
		strcpy(str, s);
	}

	char *Get(){
		return str;
	}
};

bool operator<(Name a, Name b)
{
	return strcmp(a.Get(), b.Get()) < 0;
}

class PhoneNumber
{
	char str[20];

public:
	PhoneNumber(){
		strcmp(str, "");
	}

	PhoneNumber(char *s){
		strcmp(str, s);
	}

	char *Get(){
		return str;
	}
};

int main()
{
	map<Name, PhoneNumber> m;
	m.insert(pair<Name, PhoneNumber>(Name("joe"), PhoneNumber("555-4323")));
	m.insert(pair<Name, PhoneNumber>(Name("tom"), PhoneNumber("555-9784")));
	m.insert(pair<Name, PhoneNumber>(Name("larry"), PhoneNumber("555-9372")));
	m.insert(pair<Name, PhoneNumber>(Name("tod"), PhoneNumber("555-4232")));

	char str[20];
	cout << "Enter = ";
	cin >> str;

	map<Name, PhoneNumber>::iterator p;
	p = m.find(Name(str));
	if(p != m.end())
		cout << "phone number = " << p->second.Get();
	else
		cout << "Not find phone number.\n";

	getch();
	return 0;
}
