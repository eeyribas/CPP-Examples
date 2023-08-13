#include <iostream>
#include <conio.h>

using namespace std;

template <class Data> class List
{
	Data data;
	List *next;

public:
	List(Data d);

	void Add(List *node){
		node->next = this;
		next = 0;
	}

	List *GetNext(){
		return next;
	}

	Data GetData(){
		return data;
	}
};

template <class Data>List <Data>::List(Data d)
{
	data = d;
	next = 0;
}

int main()
{
	List<char> start('a');
	List<char> *p, *last;
	last = &start;

	for(int i = 0; i < 26; i++){
		p = new List<char>('a' + i);
		p->Add(last);
		last = p;
	}

	p = &start;
	while(p){
		cout << p->GetData();
		p = p->GetNext();
	}

	getch();
	return 0;
}
