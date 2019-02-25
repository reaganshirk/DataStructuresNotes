#include <iostream>
using namespace std;

class Point 
{
public:
	double _x; // Why an _x when the variable is public? Who tf knows man
	double _y;
	Point(); // Default or empty constructor
	~Point();
	Point(double x, double y);
	void display();
};

Point::Point()
{
	_x = 0.0;
	_y = 0.0;
}

Point::~Point()
{
	cout << "The point (" << _x << ", " << _y << ") was destroyed." << endl;
}

Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

void Point::display()
{
	cout << "The point is (" << _x << ", " << _y << ")" << endl;
}

int main() 
{
	Point one;
	Point* two = new Point(3.1, 4.0);
	cout << "Hello World!" << endl;
	one.display();
	(*two).display(); // Can use: two->display();
	delete two;
	system("pause");
	return 0;
}
