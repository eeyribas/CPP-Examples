#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    char fileName[20];
    cout << "Enter file name = ";
    cin >> fileName;

    ifstream dd;
    dd.open(fileName);
    if(dd.fail())
    {
        cout << "Not find file!!!";
		exit(-1);
    }

    char ch;
    int counter = 0;
    while(!dd.eof())
    {
        dd.get(ch);
        if(ch == '\n')
            counter++;
    }
    counter--;
    dd.close();
    cout << "Sum = " << counter << endl;

    getch();
    return 0;
}
