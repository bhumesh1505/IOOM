#include "school.h"

Person :: Person(string n , string e , string p)
{
    name = n;
    email = e;
    phone = p;
}

void Person :: printDetails() const
{
    cout << "name : " << name << endl;
    cout << "email : " << email << endl;
    cout << "phone : " << phone << endl;
}

string Person :: getName() const
{
    return name;
}

string Person :: getEmail() const
{
    return email;
}

string Person :: getPhone() const
{
    return phone;
}

void Person :: setName(string n)
{
    name = n;
}


void Person :: setEmail(string e)
{
    email = e;
}

void Person :: setPhone(string p)
{
    phone = p;
}


node :: node(string s)
{
    subject = s;
}

string node :: getSubject() const
{
    return subject;
}

Teacher :: Teacher(int id,string n,string e , string p) : Person(n,e,p)
{
    T_id = id;
    head = NULL;
}


Teacher& Teacher :: operator = (const Teacher& obj)
{
    node *ptr = obj.head;
    while(ptr != NULL)
    {
        (*this).addSubject(ptr->getSubject());
        ptr = ptr->next;
    }
    return *this;
}
Teacher :: Teacher(const Teacher& obj)
{
    node *ptr = obj.head;
    while(ptr != NULL)
    {
        addSubject(ptr->getSubject());
        ptr = ptr->next;
    }
}
Teacher :: ~Teacher()
{
    node *ptr ;
    while(head != NULL)
    {
        ptr = head;
        head = head->next;
        delete[] ptr;
    }
    cout << "list deleted" << endl;
}
void Teacher :: setId(int id)
{
    T_id = id;
}
int Teacher :: getId() const
{
    return T_id;
}

void Teacher :: addSubject(string s)
{
    node *newnode = new node(s);
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void Teacher :: printSubjects() const
{
    node *ptr = head;
    cout << "Subjects" << endl;
    while(ptr != NULL)
    {
        cout << ptr->getSubject() << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
