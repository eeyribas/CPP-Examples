#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5, 1);

	cout << "Size = " << v.size() << endl;
	cout << "Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;

	vector<int>::iterator p = v.begin();
	p += 2;

	v.insert(p, 10, 9);
	cout << "Insert = " << v.size() << endl;
	cout << "New Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;

	p = v.begin();
	p += 2;
	v.erase(p, p + 10);

	cout << "Size after delete = " << v.size() << endl;
	cout << "New Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;

	getch();
	return 0;
}
