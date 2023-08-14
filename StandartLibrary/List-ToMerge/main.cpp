#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main()
{
	list<char> lst_1, lst_2;
	for(int i = 0; i < 10; i += 2)
		lst_1.push_back('A' + i);
	for(int i = 0; i < 11; i += 2)
		lst_2.push_back('A' + i);

	cout << "list_1 Content\n";
	list<char>::iterator p = lst_1.begin();
	while(p != lst_1.end()){
		cout << *p;
		p++;
	}
	cout << endl << endl;

	cout << "list_2 Content\n";
	p = lst_2.begin();
	while(p != lst_2.end()){
		cout << *p;
		p++;
	}
	cout << endl << endl;

	lst_1.merge(lst_2);
	if(lst_2.empty())
		cout << "list_2 is empty\n";

	cout << "To Merge\n";
	p = lst_1.begin();
	while(p != lst_1.end()){
		cout << *p;
		p++;
	}

	getch();
	return 0;
}
