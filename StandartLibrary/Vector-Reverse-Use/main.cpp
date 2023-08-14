#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);

	cout << "Initial = ";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	reverse(v.begin(), v.end());

	cout << "Reversed = ";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	getch();
	return 0;
}
