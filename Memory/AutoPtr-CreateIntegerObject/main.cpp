#include <iostream>
#include <conio.h>
#include <memory>

using namespace std;
using std::auto_ptr;

class Integer
{
public:
	Integer(int i = 0) : value(i){
		cout << "Integer " << value << " constructor." << endl;
	}

	~Integer(){
        cout << "Integer " << value << " deconstructor." << endl;
	}

	void Set(int i){
		value = i;
	}

	int Read() const{
		return value;
	}

private:
	int value;
};

int main()
{
	cout << "Create auto_ptr object\n";
	auto_ptr<Integer> ptr(new Integer(7));

	cout << "auto_ptr function\n";
	ptr->Set(99);
	cout << "Read : " << (*ptr).Read() << "\nExit.\n" << endl;

	getch();
	return 0;
}
