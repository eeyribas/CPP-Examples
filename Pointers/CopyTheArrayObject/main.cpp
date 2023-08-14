#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int a, b;

public:
	Sample(int m, int n){
		a = m;
		b = n;
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
	Sample obj[4] = {Sample(1, 2), Sample(3, 4), Sample(5, 6), Sample(7, 8)};
	Sample *p;
	p = obj;

	for(int i = 0; i < 4; i++){
		cout << p->GetA() << ' ';
		cout << p->GetB() << "\n";
		p++;
	}
	cout << "\n";

	getch();
	return 0;
}
