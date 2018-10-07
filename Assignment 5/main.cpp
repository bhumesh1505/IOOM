#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    double l,w,s1,s2,s3,s,major_a,minor_a,r;

    cout << "length of Rectangle " << endl;
    cin >> l;
    cout << "width of Rectangle " << endl;
    cin >> w;

    cout << endl;

    cout << "Side of Square" << endl;
    cin >> s;

    cout << endl;

    cout << "Radius of Circle" << endl;
    cin >> r;

    cout << endl;

    cout << "Major Axis of Ellipse" << endl;
    cin >> major_a;
    cout << "Minor Axis of Ellipse" << endl;
    cin >> minor_a;

    cout << endl;

    cout << "Side1 of Triangle" << endl;
    cin >> s1;
    cout << "Side2 of Triangle" << endl;
    cin >> s2;
    cout << "Side3 of Triangle" << endl;
    cin >> s3;

    Rectangle Rectangle_obj(l,w);
    Triangle Triangle_obj(s1,s2,s3);
    Square Square_obj(s);
    Ellipse Ellipse_obj(max(major_a,minor_a) , min(major_a,minor_a) );
    Circle Circle_obj(r);

    Rectangle_obj.print();
    Square_obj.print();
    Triangle_obj.print();
    Ellipse_obj.print();
    Circle_obj.print();

    /*
    vector <Shape> v;
    v.push_back(Rectangle_obj);
    v.push_back(Square_obj);
    v.push_back(Circle_obj);
    v.push_back(Ellipse_obj);
    v.push_back(Triangle_obj);

    vector <Shape> :: iterator it;
    for(it = v.begin() ; it != v.end() ; ++it)
    {
        it.print();
    }*/
    return 0;
}
