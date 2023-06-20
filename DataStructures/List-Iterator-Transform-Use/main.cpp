#include<iostream>
#include<conio.h>
#include<list>
#include<algorithm>

using namespace std;

int XForm(int i)
{
	return i * i;
}

int main()
{
	list<int> x1;

	for(int i = 0; i < 10; i++)
		x1.push_back(i);

	cout << "Original Content\n";
	list<int>::iterator p = x1.begin();
	while(p != x1.end()){
		cout << *p << " ";
		p++;
	}
	cout << endl;

	p = transform(x1.begin(), x1.end(), x1.begin(), XForm);

	cout << "Trnasform Content\n";
	p = x1.begin();
	while(p != x1.end()){
        cout << *p << " ";
		p++;
	}
	cout << endl;

	getch();
	return 0;
}
