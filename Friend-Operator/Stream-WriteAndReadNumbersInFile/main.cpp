#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

class Numbers
{
	int x, y;

public:
	Numbers(int i, int j){
		x = i;
		y = j;
	}

	friend ostream &operator<<(ostream &stream, Numbers obj);
	friend istream &operator>>(istream &stream, Numbers &obj);
};

ostream &operator<<(ostream &stream, Numbers obj)
{
	stream << obj.x << ' ' << obj.y << "\n";

	return stream;
}

istream &operator>>(istream &stream, Numbers &obj)
{
	stream >> obj.x >> obj.y;

	return stream;
}

int main()
{
	Numbers obj_1(1, 2), obj_2(3, 4);
	ofstream out("test");
	if(!out){
		cout << "Not found file.\n";
		return 1;
	}

	out << obj_1 << obj_2;
	out.close();

	ifstream in("test");
	if(!in){
		cout << "Not found file.\n";
		return 1;
	}

	Numbers obj_3(0, 0), obj_4(0, 0);
	in >> obj_3 >> obj_4;
	cout << obj_3 << obj_4;
	in.close();

	getch();
	return 0;
}
