#include <iostream>
#include <conio.h>

#define SIZE 10

using namespace std;

class Stack
{
	char stck[SIZE];
	int tos;

public:
	Stack();

	void Push(char ch);
	char Pop();
};

Stack::Stack()
{
	cout << "Constructor!\n";
	tos = 0;
}

void Stack::Push(char ch)
{
	if (tos == SIZE) {
		cout << "Full!!!";
		return;
	}

	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if (tos == 0) {
		cout << "Empty!!!";
		return 0;
	}

	tos--;

	return stck[tos];
}

int main()
{
	Stack s_1, s_2;
	s_1.Push('a');
	s_2.Push('s');
	s_1.Push('d');
	s_2.Push('h');
	s_1.Push('p');
	s_2.Push('r');

	for (int i = 0; i < 3; i++)
		cout << "s-1.push() value = " << s_1.Pop() << "\n";
	for (int i = 0; i < 3; i++)
		cout << "s-2.push() value = " << s_2.Pop() << "\n";

	getch();
	return 0;
}
