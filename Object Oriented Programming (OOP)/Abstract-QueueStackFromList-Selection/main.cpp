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

	List(){
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
	if(!item){
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

	if(!head){
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

	if(!item){
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

	if(!head){
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
	Stack s_ob;
	Queue q_ob;
	char ch;

	for(int i = 0; i < 10; i++){
        cout << "Stack or Queue?(S/Q) : ";
		cin >> ch;
		ch = tolower(ch);
		if(ch == 'q')
			p = &q_ob;
		else
			p = &s_ob;
		p->Store(i);
	}

	cout << "Enter T to terminate.\n";
	for(;;){
		cout << "Stack or QUeue (S/Q) :\n";
		cin >> ch;
		ch = tolower(ch);
		if(ch == 't')
			break;
		if(ch == 'q')
			p = &q_ob;
		else
			p = &s_ob;
		cout << p->Retrieve() << "\n";
	}
	cout << "\n";

	getch();
	return 0;
}
