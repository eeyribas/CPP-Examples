#include <iostream>
#include <cstdlib>
#include <cctype>
#include <conio.h>

using namespace std;

class List
{
public:
	List()
	{
		head = tail = next = NULL;
	}

	virtual void Store(int i) = 0;
	virtual int Retrieve() = 0;

	List *head;
	List *tail;
	List *next;
	int num;
};

class Queue : public List
{
public:
	void Store(int i);
	int Retrieve();
};

void Queue::Store(int i)
{
	List *item = new Queue;
	if (!item) {
		cout << "Not find.\n";
		exit(1);
	}
	item->num = i;

	if (tail)
		tail->next = item;
	tail = item;
	item->next = NULL;
	if (!head)
		head = tail;
}

int Queue::Retrieve()
{
	List *lst;
	if (!head) {
		cout << "List is empty.\n";
		return 0;
	}

	int i = head->num;
	lst = head;
	head = head->next;
	delete lst;

	return i;
}

class Stack : public List
{
public:
	void Store(int i);
	int Retrieve();
};

void Stack::Store(int i)
{
	List *item = new Stack;
	if (!item) {
		cout << "Alloction error.\n";
		exit(1);
	}

	item->num = i;
	if (head)
		item->next = head;

	head = item;
	if (!tail)
		tail = head;
}

int Stack::Retrieve()
{
	List *lst;
	if (!head) {
		cout << "List is empty.\n";
		exit(1);
	}

	int i = head->num;
	lst = head;
	head = head->next;
	delete lst;

	return i;
}

int main()
{
	List *lst;
	Stack s_ob;
	Queue q_ob;
	char ch;

	for (int i = 0; i < 10; i++) {
        cout << "Stack or Queue?(S/Q) : ";
		cin >> ch;
		ch = tolower(ch);
		if (ch == 'q')
			lst = &q_ob;
		else
			lst = &s_ob;
		lst->Store(i);
	}

	cout << "Enter T to terminate.\n";
	for (;;) {
		cout << "Stack or QUeue (S/Q) :\n";
		cin >> ch;
		ch = tolower(ch);
		if (ch == 't')
			break;

		if (ch == 'q')
			lst = &q_ob;
		else
			lst = &s_ob;

		cout << lst->Retrieve() << "\n";
	}
	cout << "\n";

	getch();
	return 0;
}
