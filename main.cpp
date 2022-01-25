#include <cmath>
#include <iostream>

class Point
{
	private:
		const int x;
		const int y;

	public:
		Point(int ax, int ay): x(ax), y(ay) {}
		~Point() {}

		float operator- (Point& rhs)
		{
			int x = this->x - rhs.x;
			int y = this->y - rhs.y;
			x *= x < 0 ? -1 : 1;
			y *= y < 0 ? -1 : 1;
			return static_cast<float>(x + y);
		}

};

float	manhattan_dist(Point A, Point B)
{
	return A - B;
}

float	euclidean_dist(Point A, Point B)
{
	return 1;
}

int main ()
{
	if (manhattan_dist(Point(1, 1), Point(0, -3)) == 5)
		std::cout << "Sucesso!" << std::endl;
	else
		std::cout << ":(" << std::endl;
}
