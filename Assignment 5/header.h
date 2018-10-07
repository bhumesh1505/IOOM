#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

class Shape{
    public:
            Shape(){}
            virtual double span() = 0;
            virtual double area() = 0;
};

class Rectangle : public Shape{
    protected:
        double length,width;
    public:
        Rectangle(double l , double w);
        double span();
        double area();
        void print();
};

class Triangle : public Shape{
    protected:
        double side1,side2,side3;
    public:
        Triangle(double s1 , double s2 , double s3);
        double span();
        double area();
        void print();
};

class Ellipse : public Shape{
    protected:
        double minor_axis , major_axis;
    public:
        Ellipse(double minor_a , double major_a);
        double span();
        double area();
        void print();
};

class Square : public Rectangle{
    protected:
        double side;
    public:
        Square(double s);
        double span();
        double area();
        void print();
};

class Circle : public Ellipse{
    protected:
        double radius;
    public:
        Circle(double r);
        double span();
        double area();
        void print();
};

#endif // HEADER_H_INCLUDED
