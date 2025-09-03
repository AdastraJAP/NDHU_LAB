/*


Lab of programming question 02
Description

Assume that there is a class Point resprenting a point on Cartesian coordinate system.

Class provide public function member "void setX(double )", "void setY(double )", "double getX()" and "double getY()".

Please design a class Segment that represent a segment on Cartesian coordinate system using Point.

Class Segment should content two point as data member and a function member "distance".

Function distance takes no parameter and return the distance between two points.

Write a main function to test your class.


Input

Input start with a integer N represent the number of segment.

There will be N lines follow by integer N.

Each line represent a segment as sample input

First two number represent one endpoint and next two represent another.


Output

For each segment, please print the distance in a line.


Sample Input 1 

1
15.34 94.58 14.29 34.94
Sample Output 1
59.6492
*/




#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    double x, y;

public:
    point(double x, double y) : x(x), y(y) {}

    double getX()
    {
        return this->x;
    }

    double getY()
    {
        return this->y;
    }
};

class Segment
{
public:
    point start;
    point end;

    Segment(point start, point end) : start(start), end(end){};

    double distance();
};

double Segment::distance()
{
    return sqrt(pow(end.getX() - start.getX(), 2) + pow(end.getY() - start.getY(), 2));
}

int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double start_X, start_Y, end_X, end_Y;

        cin >> end_X >> end_Y >> start_X >> start_Y;

        point start(start_X, start_Y);
        point end(end_X, end_Y);

        Segment segment(start, end);

        cout << segment.distance() << std::endl;
    }
}