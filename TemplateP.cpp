#include <iostream>
using namespace std;

// Constructor
// Copy constructor
// Default constructor
// Exception
// Destructor 
// Overload equal to operator
// Assignment something
// Ostream operator
// Comparison operators

template <class DT>
// Three local variables
void mySwap(DT& x, DT& y)
{
	DT temp;

	temp = x;
	x = y;
	y = temp;
}

template <class DT>
class Point
{
public:
	DT* _x;
	DT* _y;
	Point();
	void display();
	Point<DT> getAPoint();
	~Point();
};

template <class DT>
Point<DT> Point<DT>::getAPoint()
{
	Point<DT>* p = new Point<DT>();
	return (*p);
}

template <class DT>
Point<DT>::Point()
{
	_x = NULL;
	_y = NULL;
}

template <class DT>
void Point<DT>::display()
{
	cout << "(" << *_x << ", " << *_y << ")" << endl;
}

template <class DT>
Point<DT>::~Point()
{
	if (_x != NULL)
	{
		delete _x;
	}
	_x = NULL;
	if (_y != NULL)
	{
		delete _y;
	}
	_y = NULL;
}

int main()
{
	int k = 10;
	int j = 20;

	char a = 'a';
	char b = 'b';
	
	mySwap<int>(j, k);
	mySwap<char>(a, b);

	// Points of int and double objects
	Point<int>* P1 = new Point<int>();
	Point<double>* P2 = new Point<double>();

	(*P1)._x = new int(10);
	(*P1)._y = new int(20);

	(*P1).display();

	delete P1;
	// Shouldn't work because P2 doesn't have a value to delete
	delete P2;

	cout << j << " " << k << endl;
	cout << a << " " << b << endl;

	return 1;
}