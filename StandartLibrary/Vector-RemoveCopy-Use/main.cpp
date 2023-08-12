#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v, v2(20);

	for(int i = 0; i < 20; i++){
		if(i % 2)
			v.push_back(1);
		else
			v.push_back(2);
	}

	cout<<"Squence = ";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	remove_copy(v.begin(), v.end(), v2.begin(), 1);
	cout << "Result = ";
	for(int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout<<endl;

	getch();
	return 0;
}
