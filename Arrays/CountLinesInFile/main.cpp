#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    char file_name[20];
    cout << "Enter file name = ";
    cin >> file_name;

    ifstream if_stream;
    if_stream.open(file_name);
    if (if_stream.fail()) {
        cout << "Not find file!!!";
		exit(-1);
    }

    char ch;
    int counter = 0;
    while (!if_stream.eof()) {
        if_stream.get(ch);
        if (ch == '\n')
            counter++;
    }
    counter--;
    if_stream.close();
    cout << "Sum = " << counter << endl;

    getch();
    return 0;
}
