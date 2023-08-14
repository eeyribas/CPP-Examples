#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

class Demo
{
	double d;

public:
	Demo(){
		d = 0.0;
	}

	Demo(double x){
		d = x;
	}

	Demo &operator=(double x){
		d = x;
		return *this;
	}

	double GetD(){
		return d;
	}
};

bool operator<(Demo a, Demo b)
{
	return a.GetD() < b.GetD();
}

bool operator==(Demo a, Demo b)
{
	return a.GetD() == b.GetD();
}

int main()
{
	vector<Demo> v;

	for(int i = 0; i < 10; i++)
		v.push_back(Demo(i / 3.9));
	for(int i = 0; i < v.size(); i++)
		cout << v[i].GetD() << "  ";
	cout << endl;

	for(int i = 0; i < v.size(); i++)
		v[i] = v[i].GetD() * 2.1;
	for(int i = 0; i < v.size(); i++)
		cout << v[i].GetD() << "  ";
	cout << endl;

	getch();
	return 0;
}
