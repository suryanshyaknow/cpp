#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    float x, y;
    friend float distance(Point, Point);

public:
    Point(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Your desired Co-ordinate: (" << x << ", " << y << ")" << endl;
    }
};

// Create a function to calculate the distance between two co-ordinates.
float distance(Point a, Point b)
{
    float d;

    d = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));

    return d;
}

int main()
{
    Point A(12, 27);
    A.display();

    Point B(19, 13);
    B.display();

    float d = distance(A, B);
    cout << "The distance between the points A and B is: " << d << endl;

    float d1 = distance(Point(1, 1), Point(1, 1));
    cout << "The distance between the points A and B is: " << d1 << endl;

    float d2 = distance(Point(0, 1), Point(0, 6));
    cout << "The distance between the points A and B is: " << d2 << endl;

    float d3 = distance(Point(1, 0), Point(70, 0));
    cout << "The distance between the points A and B is: " << d3 << endl;

    return 0;
}