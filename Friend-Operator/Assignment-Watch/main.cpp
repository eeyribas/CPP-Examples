#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class Watch
{
	time_t t;

public:
	Watch()
	{
		t = time(NULL);
	}

	friend ostream &operator<<(ostream &stream, Watch obj);
};

ostream &operator<<(ostream &stream, Watch obj)
{
	struct tm *localt;
	localt = localtime(&obj.t);
	stream << asctime(localt) << endl;

	return stream;
}

int main()
{
	Watch w;
	cout << w;

	getch();
	return 0;
}
