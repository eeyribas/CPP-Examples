#include <iostream>
#include <conio.h>

#define SIZE 10

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
	cout << "Constructor.\n";
	tos = 0;
}

void Stack::Push(char ch)
{
	if (tos == SIZE) {
		cout << "Stack is full.\n";
		return;
	}

	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if (tos == 0) {
        cout << "Stack is empty.\n";
		return 0;
	}
	tos--;

	return stck[tos];
}

int main()
{
	Stack s_1, s_2;
	s_1.Push('a');
	s_1.Push('b');
	s_1.Push('v');
	s_2 = s_1;

	for (int i = 0; i < 3; i++)
		cout << "Pop s-1 = " << s_1.Pop() << "\n";

	for (int i = 0; i < 3; i++)
		cout << "Pop s-2 = " << s_2.Pop() << "\n";

	getch();
	return 0;
}
