#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int a;

public:
	Sample(int n){
		a = n;
	}

	int Get(){
		return a;
	}
};

int main()
{
	Sample obj[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
	for(int i = 0; i < 4; i++){
		cout << obj[i][0].Get() << ' ';
		cout << obj[i][1].Get() << "\n";
	}
	cout << "\n";

	getch();
	return 0;
}
