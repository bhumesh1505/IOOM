#include "header2.h"

template <class T>
Array<T> :: ~Array()
{
    delete []PArray;
}

template <class T>
T Array<T> :: find_max()
{
    T max = INT_MIN;
    for(int i=0;i<Size;i++)
    {
        if(PArray[i] > max)
        {
            max = PArray[i];
        }
    }
    return max;
}

template <class T>
void Array<T> :: swap(int a, int b)
{
    T temp;
    temp = PArray[a];
    PArray[a] = PArray[b];
    PArray[b] = temp;
}

template <class T>
void Array<T> :: Sort()
{
    int i, j , isSort;
    for (j=1; j<=Size; ++j)
    {
        isSort = 1;
        for (i=0; i<=Size-2 ; ++i)
        {
            if (PArray[i] > PArray[i+1])
            {
                swap(i, i+1);
                isSort = 0;
            }
        }
        if( isSort == 1 )
        {
            break;
        }
    }
    cout<<"Sorted array is: "<<endl;
    for (int i=0; i<Size; i++) {
        cout << "\t"<<PArray[i] << endl;
    }
}

template <class T>
Array<T> :: Array(int s)
{
    Size = s;
    PArray = new T[Size];
    for (int i = 0; i<Size; i++) {
        cout << "Enter Element " << i+1 << ": ";
        cin >> PArray[i];
    }
}
