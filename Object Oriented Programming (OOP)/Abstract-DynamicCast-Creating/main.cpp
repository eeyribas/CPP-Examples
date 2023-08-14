#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	virtual void Function(){
		cout << "Inside base\n";
	}
};

class Derived : public Base
{
public:
	void Function(){
		cout << "Inside derived\n";
	}
};

int main()
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *>(&d_ob);
	if(dp){
        cout << "Cast from derived\n";
		dp->Function();
	} else{
		cout << "error\n";
	}
	cout << endl;

	bp = dynamic_cast<Base *>(&d_ob);
	if(bp){
		cout << "Cast from derived\n";
		bp->Function();
	} else{
		cout << "Error\n";
	}
	cout << endl;

	bp = dynamic_cast<Base *>(&b_ob);
	if(bp){
		cout << "Cast form base\n";
		bp->Function();
	} else{
		cout<<"Error";
	}
	cout << endl;

	bp = dynamic_cast<Base *>(&d_ob);
	if(dp)
		cout << "Error";
	else
		cout << "Cast form base";
	cout << endl;

	bp = &d_ob;
	dp = dynamic_cast<Derived *>(bp);
	if(dp){
		cout << "Casting bp to a derived\n";
		dp->Function();
	} else {
		cout << "error\n";
	}
	cout << endl;

	bp = &b_ob;
	dp = dynamic_cast<Derived *>(bp);
	if(dp)
		cout << "error\n";
	else
		cout << "Now casting bp to derived\n";
	cout << endl;

	dp = &d_ob;
	bp = dynamic_cast<Base *>(dp);
	if(bp){
		cout<<"Casting dp to base\n";
		bp->Function();
	} else {
		cout<<"error\n";
	}

	getch();
	return 0;
}
