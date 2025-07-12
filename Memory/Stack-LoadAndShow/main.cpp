#include <iostream>
#include <conio.h>

#define SIZE 27

using namespace std;

class Stack
{
public:
	Stack();

	void Push(char ch);
	char Pop();

private:
    char stck[SIZE];
	int tos;
};

Stack::Stack()
{
	cout << "Constructing a stack\n";
	tos = 0;
}

void Stack::Push(char ch)
{
	if (tos == SIZE) {
		cout << "Stack is full\n";
		return;
	}

	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if (tos == 0) {
		cout << "Stack is empty\n";
		return 0;
	}
	tos--;

	return stck[tos];
}

void Show(Stack stck);
Stack Load();

void Show(Stack stck)
{
	char c;
	while (c = stck.Pop())
		cout << c << "\n";
	cout << "\n";
}

Stack Load()
{
	Stack stck;
	for (char c = 'a'; c <= 'z'; c++)
		stck.Push(c);

	return stck;
}

int main()
{
	Stack stck;
	stck = Load();
	Show(stck);

	getch();
	return 0;
}
