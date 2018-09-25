#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int top;
        int Size;
        int MAX_SIZE ;
        item *s;
    public:
        Stack(int max_size){
            s = new item[max_size];
            MAX_SIZE = max_size;
            Size = 0;
            top = -1;
        };
        ~Stack()
        {
            delete [] s;
        };
        bool push(int id,int quantity , string label);
        item pop();
        bool isEmpty();
        void display();
        void StackSort();
        void deleteMiddle();
        item getTop();
};

#endif // STACK_H_INCLUDED
