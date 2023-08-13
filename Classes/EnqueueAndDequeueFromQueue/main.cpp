#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 100

class Queue
{
	int queue[SIZE];
	int head, tail;

public:
	void Init();
	void Enqueue(int num);
	int Dequeue();
};

void Queue::Enqueue(int num)
{
	if(tail + 1 == head || (tail + 1 == SIZE && !head)){
		cout << "Queue is full.!\n";
		return;
	}

	tail++;
	if(tail == SIZE)
        tail = 0;
	queue[tail] = num;
}

void Queue::Init()
{
	head = tail = 0;
}

int Queue::Dequeue()
{
	if(head == tail){
		cout << "Queue is empty.\n";
		return 0;
	}

	head++;
	if(head == SIZE)
        head=0;
	return queue[head];
}

int main()
{
	Queue q_1, q_2;
	q_1.Init();
	q_2.Init();

	for(int i = 0; i <= 10; i++){
		q_1.Enqueue(i);
		q_2.Enqueue(i * i);
	}

	for(int i = 0; i <= 10; i++){
		cout << "Dequeue 1 = " << q_1.Dequeue() << "\n";
		cout << "Degueue 2 = " << q_2.Dequeue() << "\n";
	}

	getch();
	return 0;
}
