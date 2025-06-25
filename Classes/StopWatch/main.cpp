#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

class StopWatch
{
public:
	StopWatch();
	~StopWatch();

	void Start();
	void Stop();
	void Show();

private:
	double begin, end;
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
	cout << endl;
}

int main()
{
	StopWatch sw;
	sw.Start();
	for (int i = 0; i < 320000; i++);
	sw.Stop();
	sw.Show();

	getch();
	return 0;
}
