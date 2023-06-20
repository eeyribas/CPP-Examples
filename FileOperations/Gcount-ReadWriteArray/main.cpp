#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream out("test", ios::out | ios::binary);
	if(!out){
		cout << "Not Found.\n";
		return 1;
	}

	double nums[4]={1.1, 2.2, 3.3, 4.4};
	out.write((char *) nums, sizeof(nums));
	out.close();

	ifstream in("test", ios::in | ios::binary);
	if(!in){
		cout << "Not Found.\n";
		return 1;
	}
	in.read((char *) &nums, sizeof(nums));

	for(int i = 0; i < 4; i++)
		cout << nums[i] << " ";
	cout << "\n";

	cout << in.gcount() << " character read\n";
	in.close();

	getch();
	return 0;
}
