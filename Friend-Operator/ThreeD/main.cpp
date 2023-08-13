#include <iostream>
#include <conio.h>

using namespace std;

class ThreeD
{
	int x, y, z;

public:
    ThreeD(int i, int j, int k){
		x = i;
		y = j;
		z = k;
	}

	ThreeD(){
		x = 0;
		y = 0;
		z = 0;
	}

	void Get(int &i, int &j, int &k){
		i = x;
		j = y;
		k = z;
	}

	ThreeD operator+(ThreeD &obj);
	ThreeD operator-(ThreeD &obj);
	friend ThreeD operator++(ThreeD &obj);
	friend ThreeD operator--(ThreeD &obj);
};

ThreeD ThreeD::operator+(ThreeD &obj)
{
	ThreeD temp;
	temp.x = x + obj.x;
	temp.y = y + obj.y;
	temp.z = z + obj.z;

	return temp;
}

ThreeD ThreeD::operator-(ThreeD &obj)
{
	ThreeD temp;
	temp.x = x - obj.x;
	temp.y = y - obj.y;
	temp.z = z - obj.z;

	return temp;
}

ThreeD operator++(ThreeD &obj)
{
	obj.x++;
	obj.y++;
	obj.z++;

	return obj;
}

ThreeD operator--(ThreeD &obj)
{
	obj.x--;
	obj.y--;
	obj.z--;

	return obj;
}

int main()
{
	ThreeD o_1(10, 10, 10), o_2(3, 4, 5), o_3;
	int x, y, z;

	o_3 = o_1 + o_2;
	o_3.Get(x, y, z);
	cout << "X = " << x << ", Y = " << y << ", Z = " << z << "\n";

	o_3 = o_1 - o_2;
	o_3.Get(x, y, z);
	cout << "X = " << x << ", Y = " << y << ", Z = " << z << "\n";

	++o_1;
	o_1.Get(x, y, z);
	cout << "X = " << x << ", Y = " << y << ", Z = " << z << "\n";

	--o_1;
	o_1.Get(x, y, z);
	cout << "X = " << x << ", Y = " << y << ", Z = " << z << "\n";

	getch();
	return 0;
}
