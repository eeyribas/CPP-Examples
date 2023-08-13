#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 20

template <class StackType> class Stack
{
	StackType stck[SIZE];
	int tos;

public:
	void Init(){
		tos = 0;
	}

	void Push(StackType ch);
	StackType Pop();
};

template <class StackType>
void Stack<StackType>::Push(StackType obj)
{
	if(tos == SIZE){
		cout << "Stack is full.\n";
		return;
	}
	stck[tos] = obj;
	tos++;
}

template<class StackType>
StackType Stack<StackType>::Pop()
{
	if(tos == 0){
		cout << "Stack is empty.\n";
		return 0;
	}
	tos--;

	return stck[tos];
}

int main()
{
	Stack<char> s_1, s_2;
	s_1.Init();
	s_2.Init();
	s_1.Push('a');
	s_1.Push('c');
	s_1.Push('w');
	s_2.Push('o');
	s_2.Push('x');
	s_2.Push('k');

	for(int i = 0; i < 3; i++)
		cout << "Pop s_1 = " << s_1.Pop() << "\n";
	for(int i = 0; i < 3; i++)
		cout << "Pop s_2 = " << s_2.Pop() << "\n";

	Stack<double> ds_1, ds_2;
	ds_1.Init();
	ds_2.Init();
	ds_1.Push('1.1');
	ds_2.Push('2.2');
	ds_1.Push('0.5');
	ds_2.Push('3.4');

	for(int i = 0; i < 2; i++)
		cout << "Pop ds_1 = " << ds_1.Pop() << "\n";
	for(int i = 0; i < 2; i++)
		cout << "Pop ds_2 = " << ds_2.Pop() << "\n";

	getch();
	return 0;
}
