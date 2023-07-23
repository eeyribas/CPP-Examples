#include <iostream>
#include <conio.h>
#include <list>
#include <cstdlib>

using namespace std;

int main()
{
	list<char> lst;

	for(int i = 0; i < 10; i++)
		lst.push_back('A' + i);

	cout << "Original Content\n";
	list<char>::iterator p = lst.begin();
	while(p != lst.end())
    {
		cout << *p;
		p++;
	}
	cout << endl << endl;


	lst.sort();
	cout<<"To Sort\n";
	p = lst.begin();
	while(p != lst.end())
    {
		cout << *p;
		p++;
	}

	getch();
	return 0;
}
