#include <iostream>
#include <cmath>

class RegularPolygon {
private:
	int n;
	double side;
	double x;
	double y;

public:
	RegularPolygon()
	{
		n = 3;
		side = 1;
		x = 0;
		y = 0;
	}
	RegularPolygon(int n, double sideLength) {
		this->n = n;
		side = sideLength;
		x = 0;
		y = 0;
	}
	RegularPolygon(int n1, double sideLength, double x1, double y1)
	{
		n = n1;
		side = sideLength;
		x = x1;
		y = y1;
	}

	int getN() const
	{
		return n;
	}
	double getSideLength() const
	{
		return side;
	}
	double getX() const
	{
		return x;
	}
	double getY() const
	{
		return y;
	}

	void setN(int n)
	{
		this->n = n;
	}
	void setSideLength(double sideLength)
	{
		this->side = sideLength;
	}
	void setXCoord(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}

	double getPerimeter() const
	{
		return n * side;
	}
	double getArea() const
	{
		return n * side * side / (4.0 * tan(M_PI / n));
	}
};

int main() {
	RegularPolygon polygon1;
	RegularPolygon polygon2(6, 4);
	RegularPolygon polygon3(10, 3, 5.6, 7.8);

	std::cout << "Polygon 1 perimeter: " << polygon1.getPerimeter() << std::endl;
	std::cout << "Polygon 1 area: " << polygon1.getArea() << std::endl;
	std::cout << "Polygon 2 perimeter: " << polygon2.getPerimeter() << std::endl;
	std::cout << "Polygon 2 area: " << polygon2.getArea() << std::endl;
	std::cout << "Polygon 3 perimeter: " << polygon3.getPerimeter() << std::endl;
	std::cout << "Polygon 3 area: " << polygon3.getArea() << std::endl;

	return 0;
}
