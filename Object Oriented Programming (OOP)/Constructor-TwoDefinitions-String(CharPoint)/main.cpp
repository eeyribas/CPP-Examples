#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>

using namespace std;

#define SIZE 25

class StrType
{
	char *p;
	int len;

public:
	StrType();
	~StrType();
	void Set(char *p);
	void Show();
};

StrType::StrType()
{
	p = (char *)malloc(SIZE);
	if(!p){
		cout << "Memory error.";
		exit(-1);
	}
	*p = '\0';
	len = 0;
}

StrType::~StrType()
{
	cout << "p, free!!";
	free(p);
}

void StrType::Set(char *p)
{
	if(strlen(p) >= SIZE){
		cout << "too big.";
		return;
	}
	strcpy(p, p);
	len = strlen(p);
}

void StrType::Show()
{
	cout << p << "--length = " << len;
	cout << "\n";
}

int main()
{
	StrType s_1, s_2;
	s_1.Set("This is a test.");
	s_2.Set("I love C++.");
	s_1.Show();
	s_2.Show();

	getch();
	return 0;
}
