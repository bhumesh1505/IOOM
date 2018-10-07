#include "header.h"

Rectangle :: Rectangle(double l , double w):Shape()
{
    length = l;
    width = w;
}
double Rectangle :: span()
{
    return max(length,width);
}
double Rectangle :: area()
{
    return length*width;
}
Triangle :: Triangle(double s1 , double s2 , double s3):Shape()
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
}
double Triangle :: span()
{
    return max(max(side1,side2),side3);
}
double Triangle :: area()
{
    double s = (side1 + side2 + side3)/2.0;
    return sqrt( s*(s-side1)*(s-side2)*(s-side3) );
}
Ellipse :: Ellipse(double minor_a , double major_a):Shape()
{
    minor_axis = minor_a;
    major_axis = major_a;
}
double Ellipse :: span()
{
    return major_axis;
}
double Ellipse :: area()
{
    return PI*major_axis*minor_axis;
}
Square :: Square(double s) : Rectangle(s,s)
{
    side = s;
}
double Square :: span()
{
    return side;
}
double Square :: area()
{
    return Rectangle::area();
}
Circle :: Circle(double r):Ellipse(r,r)
{
    radius = r;
}
double Circle :: span()
{
    return radius;
}
double Circle :: area()
{
    return Ellipse::area();
}

void Rectangle :: print()
{
    cout << endl;
    cout << "Span of Rectangle : " << span() << endl;
    cout << "Area of Rectangle : " << area() << endl;
}


void Square :: print()
{
    cout << endl;
    cout << "Span of Square : " << span() << endl;
    cout << "Area of Square : " << area() << endl;
}

void Circle :: print()
{
    cout << endl;
    cout << "Span of Circle : " << span() << endl;
    cout << "Area of Circle : " << area() << endl;
}

void Ellipse :: print()
{
    cout << endl;
    cout << "Span of Ellipse : " << span() << endl;
    cout << "Area of Ellipse : " << area() << endl;
}

void Triangle :: print()
{
    cout << endl;
    cout << "Span of Triangle : " << span() << endl;
    cout << "Area of Triangle : " << area() << endl;
}

