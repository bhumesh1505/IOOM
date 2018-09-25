#include "LinkedList.h"


Complex::Complex(int r , int i ){
    real = r;
    img  = i;
}

int Complex::getImg() const{
    return img;
}

int Complex::getReal() const{
    return real;
}

LinkedList :: LinkedList(){
    head = NULL;
}

LinkedList :: ~LinkedList(){
    if(head != NULL)
    {
        head->prev->next = NULL;
        Node *ptr;
        while(head != NULL)
        {
            ptr = head ;
            head = head->next;
            delete ptr;
        }
    }
    cout << "linked list deleted successfully" << endl;
 }

LinkedList& LinkedList::operator + (LinkedList &ls){
    head->prev->next = ls.head;
    ls.head->prev->next = head;
    Node *temp = head->prev;
    head->prev = ls.head->prev;
    ls.head->prev = temp;
    return *this;
}

LinkedList& LinkedList :: operator + (const Complex &val){

    Node* newnode = new Node();
    newnode->cpx = val;
    if (head == NULL)
    {
        head = newnode;
        head->next = head;
        head->prev = head;
    }
    else
    {
        newnode->next = head;
        newnode->prev = head->prev;
        head->prev->next = newnode;
        head->prev = newnode;
    }
    return *this;
}

LinkedList& LinkedList :: operator = (const LinkedList &ls){

    if(this != &ls)
    {
        while(head != NULL)
        {
            -(*this);
        }
        if(ls.head != NULL)
        {
            Node *ptr = ls.head;
            do
            {
                *this + ptr->cpx;
                ptr = ptr->next;
            }
            while(ptr != ls.head);
        }
    }
    return *this;
}

LinkedList& LinkedList :: operator = (const vector <Complex> &x){

    int n = x.size();
    while(head != NULL)
    {
        -(*this);
    }
    if(head == NULL)
    {
        for(int i = 0 ; i < n ; i++)
        {
            *this + x[i];
        }
    }
    return *this;
}

LinkedList& LinkedList :: operator * (int n){

    if(n > 0)
    {
        int c = 1;
        Node *ptr = head ;
        int flag = 0 ;
        while( c < n )
        {
            c++;
            ptr = ptr->next;
            if(ptr == head)
            {
                flag = 1;
                break;
            }
        }
        if( flag == 0 )
        {
            if(n == 1)
            {
                if( head == head->next )    // single node
                {
                    head = NULL;
                }
                else
                {
                    head = head->next;
                    head->prev = ptr->prev;
                    ptr->prev->next = head;
                }
            }
            else
            {
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
            }
            delete ptr;
        }
    }
    return *this;
}

LinkedList& LinkedList :: operator - (){
    if(head != NULL){
        Node *ptr = head->prev ;
        if( head == head->next )    // single node
        {
            head = NULL;
        }
        else
        {
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
        }
        delete ptr;
    }
    return *this;
}

LinkedList& LinkedList :: operator << (int n){
    int c = 0;
    while(c < n)
    {
        c++;
        head = head->next;
    }
    return *this;
}

LinkedList& LinkedList :: operator >> (int n){
    int c = 0;
    while(c < n)
    {
        c++;
        head = head->prev;
    }
    return *this;
}

void Display(const LinkedList &ls){

    Node *head = ls.head;
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
    }
    else
    {
        cout << "Linked list ..." << endl;
        do
        {

            cout << head->cpx.getReal() ;
            if( head->cpx.getImg() >= 0 )
            {
                cout << " + ";
            }
            cout << head->cpx.getImg()<< "i " << endl;
            head = head->next;
        }
        while(head != ls.head);
        cout << "_____________________________________" << endl;
    }
}

bool Search(const LinkedList &ls,const Complex &x){

    Node *head = ls.head;
    bool found = false;
    do
    {
        if( ( head->cpx.getReal() == x.getReal() ) &&( head->cpx.getImg() == x.getImg() ) )
        {
            found = true;
        }
        head = head->next;
    }
    while( !found && head != ls.head);
    return found;
}
