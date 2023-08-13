#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	char input[20], output[20];
	cout << "Enter input file name = ";
	cin >> input;
	cout << "Enter output file name = ";
	cin >> output;

	ifstream d_in;
	ofstream d_out;

	d_in.open(input);
	if(d_in.fail()){
		cout << "Not find file!!!";
		exit(-1);
	}

	d_out.open(output);
	char ch;
	while(!d_in.eof()){
		d_in.get(ch);
		if(ch == 'a')
			d_out.put('A');
		else
			d_out.put(ch);
	}

	d_in.close();
	d_out.close();

	getch();
	return 0;

}
