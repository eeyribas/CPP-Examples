#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main()
{
	list<char> lst;
	list<char> revist;

	for(int i = 0; i < 10; i++)
		lst.push_back('a' + i);
	cout << "size = " << lst.size() << endl;
	cout << "Original Content\n";

	list<char>::iterator p;
	while(!lst.empty())
    {
		p = lst.begin();
		cout << *p;
		lst.pop_front();
		revist.push_front(*p);
	}
	cout << endl << endl;

	cout << "new size = " << revist.size() << endl;
	cout << "Revisted Content\n";
	p = revist.begin();
	while(p != revist.end())
    {
		cout << *p;
		p++;
	}

	getch();
	return 0;
}
