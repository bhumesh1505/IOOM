#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

class Complex{
	private:
		int real,img;
	public:
		Complex(int r = 0 , int i = 0);
		int getReal()const;
		int getImg()const;
};
// doubly circular linked list...
class Node {
	public:
		Complex cpx;
	    Node *next;
	    Node *prev;
};

class LinkedList{
	private:
		Node *head;
	public:
		LinkedList();
        ~LinkedList(); // destructor
	    friend void Display(const LinkedList&);  // global friend function
	    friend bool Search(const LinkedList& , const Complex &);   // global friend function
        LinkedList& operator + (LinkedList &ls);
        LinkedList& operator + (const Complex &val);
        LinkedList& operator = (const LinkedList &ls);
        LinkedList& operator = (const vector <Complex> &x);
        LinkedList& operator * (int n);
        LinkedList& operator - ();
        LinkedList& operator << (int n);
        LinkedList& operator >> (int n);
};


#endif // LINKEDLIST_H_INCLUDED
