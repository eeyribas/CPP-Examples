#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

void RevStr(char *s)
{
	char temp[80];
	int j;

	for(int i = strlen(s) - 1, j = 0; i >= 0; i--, j++)
		temp[j] = s[i];
	temp[j] = '\0';

	strcpy(s, temp);
}

void RevStr(char *in, char *out)
{
	int j;
	for(int i = strlen(in) - 1, j = 0; i >= 0; i--, j++)
		out[j] = in[i];
	out[j] = '\0';
}

int main()
{
	char str_1[80], str_2[80];
	strcpy(str_1, "This is a Test!");

	RevStr(str_1, str_2);
	cout << str_2 << "\n";

	RevStr(str_1);
	cout << str_1 << "\n";

	getch();
	return 0;
}
