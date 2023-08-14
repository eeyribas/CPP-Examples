#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int a, b;

public:
	Sample(int n, int m){
		a = n;
		b = m;
	}

	int GetA(){
		return a;
	}

	int GetB(){
		return b;
	}
};

int main()
{
	Sample objs[4] = {Sample(1, 2), Sample(3, 4), Sample(5, 6), Sample(7, 8)};
	Sample *p;
	p = &objs[3];

	for(int i = 0; i < 4; i++){
		cout << p->GetA() << ' ';
		cout << p->GetB() << "\n";
		p--;
	}
	cout << "\n";

	getch();
	return 0;
}
