#include <iostream>
#include <conio.h>
#include <new>

using namespace std;

class Test
{
	static int count;

public:
	Test(){
        count++;
	}

	~Test(){
		count--;
	}

	int GetCount(){
		return count;
	}
};

int Test::count;

int main()
{
	Test o_1, o_2, o_3;
	cout << o_1.GetCount() << " objects in existance.\n";
	Test *p;

	try{
		p = new Test;
		if(!p){
			cout << "Memory error.\n";
			return 1;
		}
	} catch(bad_alloc ba){
		cout << "Memory error.\n";
		return 1;
	}

	cout << o_1.GetCount();
	cout << " objects in existence after alloction.\n";
	delete p;

	cout << o_1.GetCount();
	cout << " objects in existence after deletion.\n";

	getch();
	return 0;
}
