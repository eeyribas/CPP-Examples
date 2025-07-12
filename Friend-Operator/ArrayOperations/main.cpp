#include <iostream>
#include <conio.h>
#include "array.h"

using namespace std;

int main()
{
    cout << "Creating Array Count = " << Array::Read() << '\n';

	Array array_1(7), array_2;
	cout << "Array Count = " << Array::Read() << '\n';

	cout << "Array_1 Size = " << array_1.ReadSize()
		 << "\nArray after initial value is assigned =\n" << array_1 << '\n';
	cout << "Array_2 Size = " << array_2.ReadSize()
		 << "\nArray after initial value is assigned =\n" << array_2 << '\n';

	cout << "Enter Number (17 piece) = \n";
	cin  >> array_1 >> array_2;
	cout << "Values =\n" << "array_1 =\n" << array_1
         << "array_2=\n" << array_2 << '\n';

	cout << "Running:array_1 != array_2\n";
	if (array_1 != array_2)
		cout << "Not equal!\n";

	Array array_3(array_1);
	cout << "\nArray_3 Size = " << array_3.ReadSize()
		 << "\nArray after initial value is assigned =\n" << array_3 << '\n';

	cout << "Array_2 set number =\n";
	array_1 = array_2;
	cout << "Array_1 =\n" << array_1 << "array_2=\n" << array_2 << '\n';

	cout << "Running:Array_1 == Array_2\n";
	if (array_1 == array_2)
		cout << "Not equal\n\n";

	cout << "Array_1[5] init(100) = \n";
	cout << "Array_1 = \n" << array_1 << '\n';
	cout << "Array_1[15] init(100) = " << endl;

	getch();
    return 0;
}
