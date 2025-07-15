#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

class Timer
{
public:
	Timer();
	~Timer();

private:
    clock_t start;
};

Timer::Timer()
{
	start = clock();
}

Timer::~Timer()
{
	clock_t end;
	end = clock();
	cout << "Last time = " << (end - start) / CLOCKS_PER_SEC << "\n";
}

int main()
{
	Timer obj;
	char c;
	cout << "Press a key and then press enter = ";
	cin >> c;

	getch();
	return 0;
}
