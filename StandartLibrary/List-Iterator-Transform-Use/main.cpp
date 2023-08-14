#include <iostream>
#include <conio.h>
#include <list>
#include <algorithm>

using namespace std;

int XForm(int i)
{
	return i * i;
}

int main()
{
	list<int> x_1;
	for(int i = 0; i < 10; i++)
		x_1.push_back(i);

	cout << "Original Content\n";
	list<int>::iterator p = x_1.begin();
	while(p != x_1.end()){
		cout << *p << " ";
		p++;
	}
	cout << endl;

	p = transform(x_1.begin(), x_1.end(), x_1.begin(), XForm);

	cout << "Transform Content\n";
	p = x_1.begin();
	while(p != x_1.end()){
        cout << *p << " ";
		p++;
	}
	cout << endl;

	getch();
	return 0;
}
