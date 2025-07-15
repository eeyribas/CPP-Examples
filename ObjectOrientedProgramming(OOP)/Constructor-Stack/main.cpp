#include <iostream>
#include <conio.h>

#define SIZE 30

using namespace std;

class Stack
{
public:
	Stack(char c);

	void Push(char ch);
	char Pop();

private:
    char stck[SIZE];
	int tos;
	char who;
};

Stack::Stack(char c)
{
	tos = 0;
	who = 0;
	cout << "Constructor." << who << '\n';
}

void Stack::Push(char ch)
{
	if (tos == SIZE) {
        cout << "Stack " << who << " full.\n";
		return;
    }

	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if (tos == 0)
		cout << "Stack " << who << " empty\n";
	tos--;

	return stck[tos];
}

int main()
{
	Stack s_1('A'), s_2('B');
	s_1.Push('a');
	s_1.Push('b');
	s_1.Push('r');
	s_2.Push('j');
	s_2.Push('o');
	s_2.Push('b');

	for (int i = 0; i < 5; i++)
		cout << "s-1 = " << s_1.Pop() << "\n";
	for (int i = 0; i < 5; i++)
		cout << "s-2 = " << s_2.Pop() << "\n";

	getch();
	return 0;
}
