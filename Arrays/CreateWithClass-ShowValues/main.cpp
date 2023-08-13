#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int x;

public:
	Sample(int n){
		x = n;
	}

	int GetX(){
		return x;
	}
};

int main()
{
	Sample A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0; i < 10; i++)
		cout << A[i].GetX() << ' ';
	cout << "\n";

	getch();
	return 0;
}
