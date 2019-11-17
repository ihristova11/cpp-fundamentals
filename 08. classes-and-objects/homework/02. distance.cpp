#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point
{
	Point(double xp, double yp)
	{
		x = xp;
		y = yp;
	}

public:
	double x;
	double y;

	double distanceToPoint(Point a)
	{
		return sqrt(pow(abs(a.x - this->x), 2.0) + (pow(abs(a.y - this->y), 2.0)));
	}
};


int main()
{
	int x, y;
	cin >> x >> y;
	Point a(x, y);
	cin >> x >> y;
	Point b(x, y);

	cout << fixed << setprecision(3) << b.distanceToPoint(a);

	return 0;
}