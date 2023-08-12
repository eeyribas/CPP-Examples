#include "data.h"

Data::Data(int value)
{
    data = value;
	cout << "Object : " << data << " constructor.";
}

Data::~Data()
{
    cout << "Object : " << data << " deconstructor.";
}
