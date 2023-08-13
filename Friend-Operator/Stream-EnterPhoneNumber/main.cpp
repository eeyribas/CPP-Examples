#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class TelephoneNo
{
	friend ostream &operator <<(ostream &, const TelephoneNo &);
	friend istream &operator >>(istream &, TelephoneNo &);

private:
	char field_code[4];
	char central[4];
	char line[5];
};

ostream &operator<<(ostream &output, const TelephoneNo &num)
{
	cout << "(" << num.field_code << ")" << num.central << "---" << num.line;

	return output;
}

istream &operator>>(istream &input, TelephoneNo &num)
{
	input.ignore();
	input >> setw(4);
	input.ignore(2);
	input >> setw(4);
	input.ignore();
	input >> setw(5);

	return input;
}

int main()
{
	TelephoneNo tel;

	cout << "Enter telephone numbers(123)456-7890 =\n";
	cin >> tel;

	cout << "Entering Tel No = " << tel << endl;

	getch();
	return 0;
}
