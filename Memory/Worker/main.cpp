#include <iostream>
#include <conio.h>
#include "worker.h"

using namespace std;

int main()
{
	cout << "Worker number : " << Worker::ReadNumber() << endl;

	Worker *w1_ptr = new Worker("Susan", "Baker");
	Worker *w2_ptr = new Worker("Robert", "Jones");

	cout << "Worker Number : " << w1_ptr->ReadNumber();
	cout << "\n\n1-Worker : " << w1_ptr->ReadName() << " " <<
		w1_ptr->ReadSurname() << "\n2-Worker : " << w2_ptr->ReadName()
		<< " " << w2_ptr->ReadSurname() << "\n\n";

	delete w1_ptr;
	w1_ptr = 0;
	delete w2_ptr;
	w2_ptr = 0;

	cout << "Number of employees after deletion : " << Worker::ReadNumber() << endl;

	getch();
	return 0;
}
