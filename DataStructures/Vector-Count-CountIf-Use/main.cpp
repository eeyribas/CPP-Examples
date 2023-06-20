#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>

using namespace std;

bool Even(int x)
{
	return !(x % 2);
}

int main()
{
	vector<int> v;
	for(int i = 0; i < 20; i++){
		if(i % 2)
			v.push_back(1);
		else
			v.push_back(2);
	}

	cout<<"Squence = ";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
	cout << endl;

	int n = count(v.begin(), v.end(), 1);
	cout << n << " elements are 1";

	n = count_if(v.begin(), v.end(), Even);
	cout << n << " elements are even\n";

	getch();
	return 0;
}
