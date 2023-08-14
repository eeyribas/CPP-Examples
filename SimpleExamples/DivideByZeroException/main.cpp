#include <iostream>
#include <conio.h>

using namespace std;

class DivideByZeroException
{
public:
	DivideByZeroException() : message("Zero division has been attempted"){}

	const char *What() const{
		return message;
	}

private:
	const char *message;

};

double Section(int part, int denominator)
{
	if(denominator == 0)
		throw DivideByZeroException();

	return static_cast<double>(part) / denominator;
}

int main()
{
    int number_1, number_2;
    double result;
    cout << "Enter two integers (Make an end-of-file sign to exit)\n";

    while(cin >> number_1 >> number_2){
        try{
            result = Section(number_1, number_2);
            cout << " Section =: " << result << endl;
        } catch(DivideByZeroException ex){
            cout << "No exception occurred: " << ex.What() << '\n';
        }
        cout << "\n	Enter two integers (Enter ^Z for output) = ";
    }
	cout << endl;

	getch();
	return 0;
}
