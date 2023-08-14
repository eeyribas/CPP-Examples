#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 27

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
	cout << "Constructing a stack\n";
	tos = 0;
}

void Stack::Push(char ch)
{
	if(tos == SIZE){
		cout << "Stack is full\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char Stack::Pop()
{
	if(tos == 0){
		cout << "Stack is empty\n";
		return 0;
	}
	tos--;

	return stck[tos];
}

void ShowStack(Stack o);
Stack LoadStack();

void ShowStack(Stack o)
{
	char c;
	while(c = o.Pop())
		cout << c << "\n";
	cout << "\n";
}

Stack LoadStack()
{
	Stack t;
	for(char c = 'a'; c <= 'z'; c++)
		t.Push(c);

	return t;
}

int main()
{
	Stack s1;
	s1 = LoadStack();
	ShowStack(s1);

	getch();
	return 0;
}
