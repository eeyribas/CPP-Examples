#include <iostream>
#include <conio.h>

using namespace std;

class Triangle
{
	int height, base;

public:
	Triangle(int h, int b)
	{
		height = h;
		base = b;
	}

	friend ostream &operator<<(ostream &stream, Triangle obj);
};

ostream &operator<<(ostream &stream, Triangle obj)
{
	int j, k;
	int i = j = obj.base - 1;

	for(int h = obj.height - 1; h; h--)
    {
		for(k = i; k; k--)
			stream << ' ';
		stream << '*';

		if(j != 1)
        {
			for(k = j - i - 1; k; k--)
				stream << ' ';
			stream << '*';
		}
		i--;
		stream << "\n";
	}

	for(k = 0; k <obj.base; k++)
		stream << '*';
	stream << '\n';

	return stream;
}

int main()
{
	Triangle t_1(5, 5), t_2(10, 10), t_3(12, 12);
	cout << t_1;
	cout << endl << t_2 << endl << t_3;

	getch();
	return 0;
}
