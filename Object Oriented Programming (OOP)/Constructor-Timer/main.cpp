#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class Timer
{
	clock_t start;

public:
	Timer();
	~Timer();
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
