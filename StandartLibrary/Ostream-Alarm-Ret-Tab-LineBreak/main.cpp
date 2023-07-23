#include <iostream>
#include <conio.h>

using std::ostream;
using std::cout;
using std::flush;

ostream& Alarm(ostream& output)
{
	return output << '\a';
}

ostream& Ret(ostream& output)
{
	return output << '\r';
}

ostream& Tab(ostream& output)
{
	return output << '\t';
}

ostream& BreakLine(ostream& output)
{
	return output << '\n' << flush;
}

int main()
{
	cout << "Testing : " << BreakLine
		 << 'a'<< Tab << 'b' << Tab << 'c' << BreakLine
		 << " Ret and BreakLine Testing : "
		 << BreakLine << "........";
	cout << Alarm;
	cout << Ret << "-----" << BreakLine;

	getch();
	return 0;
}
