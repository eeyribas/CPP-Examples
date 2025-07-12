#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class Watch
{
public:
    Watch()
    {
        t = time(NULL);
	}

	friend ostream &operator<<(ostream &stream, Watch obj);

private:
    time_t t;
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
	Watch watch;
	cout << watch;

	getch();
	return 0;
}
