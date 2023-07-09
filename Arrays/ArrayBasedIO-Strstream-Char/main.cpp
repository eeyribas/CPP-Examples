#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

char in_buf[] = "This is a test of c++ array-based I/0";
char out_buf[255];

int main()
{
	istrstream i_str(in_buf);
	ostrstream o_str(out_buf, sizeof out_buf);

	char ch;
	while(!i_str.eof()){
		i_str.get(ch);
		if(!i_str.eof())
			o_str.put(ch);
	}
	o_str.put('\0');

	cout << "Input = " << in_buf << "\n";
	cout << "Output = " << out_buf << "\n";

	getch();
	return 0;
}
