#include <cmath>
#include <iostream>
using namespace std;

class Point
{
	private:
		float x, y;

	public:
		Point(float ax, float ay)
		{
			x = ax;
			y = ay;
		}

		float coord_x(void) { return x; }
		float coord_y(void) { return y; }
};

float	manhattan_dist(Point A, Point B)
{
	float	partial;
	float	dist = 0;

	partial = A.coord_x() - B.coord_x();
	dist += partial >= 0 ? partial : -partial;

	partial = A.coord_y() - B.coord_y();
	dist += partial >= 0 ? partial : -partial;

	return dist;
}

float	euclidean_dist(Point A, Point B)
{
	return sqrt(pow(A.coord_x() - B.coord_x(), 2) + pow(A.coord_y() - B.coord_y(), 2));
}

int main ()
{
	Point A = Point(5, 4);
	Point B = Point(3, 2);

	cout << "A: " << A.coord_x() << ", " << A.coord_y() << endl;
	cout << "B: " << B.coord_x() << ", " << B.coord_y() << endl;

	cout << "manhattan distance: " << manhattan_dist(A, B) << endl;
	cout << "euclidean distance: " << euclidean_dist(A, B) << endl;
}
