#include "sample.h"

void Sample::Show()
{
    cout << str << "\n";
}

void Sample::Set(char *text)
{
    strcpy(str, text);
}
