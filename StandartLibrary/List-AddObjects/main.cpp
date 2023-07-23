#include <iostream>
#include <conio.h>
#include <list>
#include <cstring>

using namespace std;

class Project
{
public:
	char name[40];
	int days;

	Project()
	{
		strcpy(name, " ");
		days = 0;
	}

	Project(char *n, int d)
	{
		strcpy(name, n);
		days = d;
	}

	void AddDays(int i)
	{
		days += i;
	}

	void SubDays(int i)
	{
		days -= i;
	}

	bool Completed()
	{
		return !days;
	}

	void Report()
	{
		cout << name << ": ";
		cout << days;
		cout << " days left\n";
	}
};

bool operator<(const Project &a, const Project &b)
{
	return a.days < b.days;
}

bool operator>(const Project &a, const Project &b)
{
	return a.days > b.days;
}

bool operator==(const Project &a, const Project &b)
{
	return a.days == b.days;
}

bool operator!=(const Project &a, const Project &b)
{
	return a.days != b.days;
}

int main()
{
	list<Project> proj;

	proj.push_back(Project("compiler", 35));
	proj.push_back(Project("spread", 22));
	proj.push_back(Project("stll", 26));

	list<Project>::iterator p = proj.begin();
	while(p != proj.end())
    {
		p->Report();
		p++;
	}

	p = proj.begin();
	p->AddDays(10);

	do
    {
		p->SubDays(5);
		p->Report();
	}while(!p->Completed());

	getch();
	return 0;
}
