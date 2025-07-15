#include "circle.h"
#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

Circle::Circle(double r, int a, int b) : Point(a, b)
{
	SetR(r);
}

void Circle::SetR(double tmp)
{
	r = (tmp >= 0 ? tmp : 0);
}

double Circle::ReadR()const
{
	return r;
}

double Circle::Area() const
{
	return 3.14 * r * r;
}

ostream &operator<<(ostream &output, const Circle &d)
{
	output << "Center = " << static_cast<Point>(d) << "; r = "
		   << setiosflags(ios::fixed | ios::showpoint)
		   << setprecision(2) << d.r;

	return output;
}
