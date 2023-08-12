#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	cout << "Size = " << v.size() << endl;

	for(int i = 0; i < 10; i++)
		v.push_back(i);
	cout << "New size = " << v.size() << endl;

	cout << "Vector Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "   ";
	cout << endl;

	for(int i = 0; i < 10; i++)
		v.push_back(i + 10);
	cout << "Current size = " << v.size() << endl;

	cout << "Vector Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "   ";
	cout << endl;

	for(int i = 0; i < v.size(); i++)
		v[i] = v[i] + v[i];
	cout << "New Vector Content\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "   ";
	cout << endl;

	getch();
	return 0;
}
