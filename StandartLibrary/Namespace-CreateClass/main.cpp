#include <iostream>
#include <conio.h>

using namespace std;

namespace FirstNS
{
    class Demo
	{
		int i;
	public:
		Demo(int x)
		{
			i = x;
		}

		void SetI(int x)
		{
			i = x;
		}

		int GetI()
		{
			return i;
		}
	};

    char str[] = "Illustrating namespaces.\n";
    int counter;
}

namespace SecondNS
{
	int x, y;
}

int main()
{
	FirstNS::Demo obj(10);
	cout << "Value of obj is = " << obj.GetI() << endl;
	obj.SetI(99);
	cout << "Value of obj is = " << obj.GetI() << endl;

	using FirstNS::str;
	cout << str;

	using namespace FirstNS;
	for(counter = 10; counter; counter--)
		cout << counter << "  ";
	cout << endl;

	SecondNS::x = 10;
	SecondNS::y = 20;
	cout << "x, y = " << SecondNS::x << "  " << SecondNS::y << endl;

	using namespace SecondNS;
	Demo x_obj(x), y_obj(y);
	cout << "x_obj, y_obj = " << x_obj.GetI() << "  " << y_obj.GetI() << endl;

    getch();
	return 0;
}
