#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 10

class Stack
{
	char stck[SIZE];
	int tos;

public:
	void Init();
	void Push(char ch);
	char Pop();
};

void Stack::Init()
{
	tos = 0;
}

void Stack::Push(char ch)
{
	if(tos == SIZE)
    {
		cout << "Stack is full.!!";
		return;
	}

	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if(tos == 0)
    {
		cout << "Stack is empty!";
		return 0;
	}
	tos--;

	return stck[tos];
}

int main()
{
	Stack s_1, s_2;
	s_1.Init();
	s_2.Init();
	s_1.Push('a');
	s_2.Push('x');
	s_1.Push('b');
	s_2.Push('c');
	s_1.Push('d');
	s_2.Push('z');

	for(int i = 0; i < 3; i++)
		cout << "s_1 Push : " << s_1.Pop() << "\n";
	for(int i = 0; i < 3; i++)
		cout << "s_2 Push : " << s_2.Pop() << "\n";

	getch();
	return 0;
}
