#include <iostream>
#include <conio.h>
#include "worker.h"

using namespace std;

int main()
{
	cout << "Worker number : " << Worker::ReadNumber() << endl;

	Worker *worker_1 = new Worker("Susan", "Baker");
	Worker *worker_2 = new Worker("Robert", "Jones");
	cout << "Worker Number : " << worker_1->ReadNumber();
	cout << "\n\n1 - Worker : " << worker_1->ReadName()
         << " " << worker_1->ReadSurname()
         << "\n2 - Worker : " << worker_2->ReadName()
		 << " " << worker_2->ReadSurname() << "\n\n";

	delete worker_1;
	worker_1 = 0;
	delete worker_2;
	worker_2 = 0;
	cout << "Number of employees after deletion : "
         << Worker::ReadNumber() << endl;

	getch();
	return 0;
}
