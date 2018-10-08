#include <iostream>
#include "header.h"
#include "header2.h"
#include "definations2.cpp"

using namespace std;

int main()
{

    double l,w,s1,s2,s3,s,major_a,minor_a,r;
    cout << "Question 1 " << endl;
    cout << "-------------------------------------------------------" << endl;
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
    vector <Shape *> v;
    v.push_back(new Rectangle(l,w));
    v.push_back(new Square(s));
    v.push_back(new Circle(r));
    v.push_back(new Ellipse(max(major_a,minor_a) , min(major_a,minor_a)));
    v.push_back(new Triangle(s1,s2,s3));
    int it ;
    for(it = 0 ; it < 5 ; ++it)
    {
        v[it]->print();
    }

    cout << "Question 2 " << endl;
    cout << "-------------------------------------------------------" << endl;

    int sizeOfArry1;
    cout << "Enter size of Integer Array: ";
    cin >> sizeOfArry1;

    //Use as an int Array;
    Array<int> intArray = Array<int>(sizeOfArry1);
    intArray.Sort();
    int max =intArray.find_max();
    cout<<"MAX Element is "<<max<<endl;

    int sizeOfArry2;
    cout << "Enter size of float Array: ";
    cin >> sizeOfArry2;

    Array<float> floatArray = Array<float>(sizeOfArry2);
    floatArray.Sort();
    float m = floatArray.find_max();
    cout<<"MAX Element is "<<m<<endl;

    int sizeOfArry3;
    cout << "Enter size of long Array: ";
    cin >> sizeOfArry3;

    Array<long> longArray = Array<long>(sizeOfArry3);
    longArray.Sort();
    long m2 = longArray.find_max();
    cout<<"MAX Element is "<<m2<<endl;
    while(1)
    {

    }
    return 0;
}
