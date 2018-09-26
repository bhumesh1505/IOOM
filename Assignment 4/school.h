#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

class node
{
    private:
        string subject;
    public:
        node *next;
        node(string s="");
        string getSubject() const;
};

class Person
{
    private:
            string name,email,phone;
    public:
            Person(string name="" , string email = "" , string phone="");
            string getName() const;
            string getEmail() const;
            string getPhone() const;
            void setName(string name);
            void setEmail(string email);
            void setPhone(string phone);
            void printDetails() const;
};

class Teacher : public Person
{
    private:
            int T_id;
            node *head;
    public:
        Teacher(int id = -1,string n = "" , string e = "" , string p = "");
        Teacher& operator = (const Teacher& obj);
        Teacher(const Teacher& obj);
        ~Teacher();
        int getId() const;
        void setId(int id);
        void addSubject(string s);
        void printSubjects() const;
        void printDetails() const
        {
            printDetails();
            cout << "ID = " << T_id << endl;
            (*this).printSubjects();
        }
};


#endif // SCHOOL_H_INCLUDED
