#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cctype>

using namespace std;

class List
{
public:
	List *head;
	List *tail;
	List *next;
	int num;

	List()
	{
		head = tail = next = NULL;
	}

	virtual void Store(int i) = 0;
	virtual int Retrieve() = 0;
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
	if(!item)
    {
		cout << "Not find.\n";
		exit(1);
	}
	item->num = i;

	if(tail)
		tail->next = item;
	tail = item;
	item->next = NULL;
	if(!head)
		head = tail;
}

int Queue::Retrieve()
{
	List *p;

	if(!head)
    {
		cout << "Listis empty.\n";
		return 0;
	}

	int i = head->num;
	p = head;
	head = head->next;
	delete p;

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

	if(!item)
    {
		cout << "Alloction error.\n";
		exit(1);
	}
	item->num = i;
	if(head)
		item->next = head;
	head = item;
	if(!tail)
		tail = head;
}

int Stack::Retrieve()
{
	List *p;

	if(!head)
    {
		cout << "List is empty.\n";
		exit(1);
	}

	int i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}

int main()
{
	List *p;

	Queue q_ob;
	p = &q_ob;

	p->Store(1);
	p->Store(2);
	p->Store(3);
	cout << "Queue = ";
	cout << p->Retrieve();
	cout << p->Retrieve();
	cout << p->Retrieve();
	cout << "\n";

	Stack s_ob;
	p = &s_ob;

	p->Store(1);
	p->Store(2);
	p->Store(3);

	cout << "Stack = ";
	cout << p->Retrieve();
	cout << p->Retrieve();
	cout << p->Retrieve();
	cout << "\n";

	getch();
	return 0;
}
