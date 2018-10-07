#ifndef HEADER2_H_INCLUDED
#define HEADER2_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
template <class T>

class Array {
protected:
    int Size;
    T * PArray;
public:
    Array(int s=0);
    void Sort();
    void swap(int a, int b);
    T find_max();
    ~Array();
};

#endif // HEADER2_H_INCLUDED
