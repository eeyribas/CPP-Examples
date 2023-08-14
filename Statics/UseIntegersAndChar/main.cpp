#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Output
{
    static char out_buf[255];
	static int in_use;
	static int o_index;
	char str[80];
	int i;
	int who;

public:
	Output(int w, char *s){
		strcpy(str, s);
		i = 0;
		who = w;
	}

	int PutBuf(){
        if(!str[i]){
			in_use = 0;
			return 0;
		}

		if(!in_use)
			in_use = who;

		if(in_use != who)
			return -1;

		if(str[i]){
			out_buf[o_index] = str[i];
			i++;
			o_index++;
			out_buf[o_index] = '\0';

			return 1;
		}

		return 0;
	}

	void Show(){
		cout << out_buf << "\n";
	}
};


char Output::out_buf[255];
int Output::in_use = 0;
int Output::o_index = 0;

int main()
{
	Output o_1(1, "This is a test"), o_2(2, " of static");
	while(o_1.PutBuf() | o_2.PutBuf());
	o_1.Show();

	getch();
	return 0;
}
