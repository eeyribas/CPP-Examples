#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main()
{
	list<char> lst;
	for(int i = 0; i < 10; i++)
		lst.push_back('A' + i);
	cout << "size = " << lst.size() << endl;

	list<char>::iterator p;
	cout << "Content\n";
	while(!lst.empty()){
		p = lst.begin();
		cout << *p;
		lst.pop_front();
	}

	getch();
	return 0;
}
