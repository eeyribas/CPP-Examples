#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

class CoordinaatLength
{
public:
	int x, y;

	CoordinaatLength()
	{
		x = y = 0;
	}

	CoordinaatLength(int a, int b)
	{
		x = a;
		y = b;
	}
};

bool operator<(CoordinaatLength a, CoordinaatLength b)
{
	return (a.x + a.y) < (b.x + b.y);
}

bool operator==(CoordinaatLength a, CoordinaatLength b)
{
	return (a.x + a.y) == (b.x + b.y);
}

int main()
{
	vector<CoordinaatLength> v;

	for(int i = 0; i < 10; i++)
		v.push_back(CoordinaatLength(i, i));
	for(int i = 0; i < v.size(); i++)
		cout << v[i].x << ", " << v[i].y << "  ";
	cout << endl;

	for(int i = 0; i < v.size(); i++)
		v[i].x = v[i].x * 2;
	for(int i = 0; i < v.size(); i++)
		cout << v[i].x << ", " << v[i].y << "  ";
	cout << endl;

	getch();
	return 0;
}
