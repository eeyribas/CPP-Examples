#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class StopWatch
{
	double begin, end;

public:
	StopWatch();
	~StopWatch();

	void Start();
	void Stop();
	void Show();
};

StopWatch::StopWatch()
{
	begin = end = 0;
}

StopWatch::~StopWatch()
{
	cout << "~Deconstructor.\n";
	Show();
}

void StopWatch::Start()
{
	begin = (double)clock() / CLOCKS_PER_SEC;
}

void StopWatch::Stop()
{
	end = (double)clock() / CLOCKS_PER_SEC;
}

void StopWatch::Show()
{
	cout << "Time = " << end - begin;
	cout << "\n";
}

int main()
{
	StopWatch watch;
	watch.Start();
	for(int i = 0; i < 320000; i++);
	watch.Stop();
	watch.Show();

	getch();
	return 0;
}
