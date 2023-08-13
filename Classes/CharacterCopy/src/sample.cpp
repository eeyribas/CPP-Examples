#include "sample.h"

void Sample::Show()
{
    cout << s << "\n";
}

void Sample::Set(char *str)
{
    strcpy(s, str);
}
