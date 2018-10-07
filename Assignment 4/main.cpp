#include <bits/stdc++.h>
#include "String.h"
#include "school.h"
using namespace std;
int main()
{

    int select;
    cout << "1 . Question " << endl;
    cout << "2 . Question " << endl;
    cout << "3 . Question " << endl;
    cin >> select;
    if(select == 1 )
    {
        char s[100] ;
        cout << "Enter String " << endl;
        cin >> s;
        Pstring p(s);
        p.display();
    }

    else if(select == 2)
    {
        int stop = 0;
        while(!stop)
        {
            cout<<"enter which function to call:"<<endl;
            cout<<"1.left"<<endl;
            cout<<"2.mid"<<endl;
            cout<<"3.right"<<endl;
            cout<<"4.exit"<<endl;
            int choice;
            cin>>choice;
            char s[100];
            int n,start;
            switch(choice)
            {

                case 1: {
                        cout<<"enter a string"<<endl;
                        cin>>s;
                        cout<<"enter n"<<endl;
                        cin>>n;
                        Pstring2 obj;
                        Pstring2 obj1(s);
                        obj1.display();

                        obj1 = obj.left(s,n);

                        obj1.display();
                        obj.display();

                        break;
                        }
                case 2:
                        {
                        cout<<"enter a string"<<endl;
                        cin>>s;
                        cout<<"enter n"<<endl;
                        cin>>n;
                        cout<<"enter start"<<endl;
                        cin>>start;
                        Pstring2 obj;
                        obj.mid(s,start,n);
                        obj.display();
                        break;
                        }
                case 3:
                        {
                        cout<<"enter a string"<<endl;
                        cin>>s;
                        cout<<"enter n"<<endl;
                        cin>>n;
                        Pstring2 obj;
                        obj.right(s,n);
                        obj.display();
                        break;
                        }
                case 4: {stop = 1;
                        break;}

                default:{cout<<"enter valid number"<<endl;
                        break;}
            }
        }

    }
    else
    {
        int stop = 0;
        while(!stop)
        {
            int ch;
            cout << "1 . class Person" << endl;
            cout << "2 . class Teacher" << endl;
            cout << "3 . class NonTeachingStaff" << endl;
            cout << "4 . class Student" << endl;
            cout << "5 . exit" << endl;
            cin >> ch ;
            string n,e,p,jr,sub;
            int id,rn;
            float cgpa;
            switch(ch)
            {
                case 1:
                        {
                            cout << "Enter name" << endl;
                            cin >> n;
                            cout << "Enter email" << endl;
                            cin >> e;
                            cout << "Enter phone" << endl;
                            cin >> p;
                            Person obj(n,e,p);
                            obj.printDetails();
                            break;
                        }

                case 2:
                        {
                            cout << "Enter name" << endl;
                            cin >> n;
                            cout << "Enter email" << endl;
                            cin >> e;
                            cout << "Enter phone" << endl;
                            cin >> p;
                            cout << "Enter id" << endl;
                            cin >> id;
                            Teacher obj(id,n,e,p);
                            int more = 1;
                            cout << "Enter Subjects" << endl;
                            while(more == 1)
                            {
                                cin >> sub;
                                obj.addSubject(sub);
                                cout << "1 more" << endl;
                                cout << "0 stop" << endl;
                                cin >> more ;
                            }
                            obj.printDetails();
                            break;
                        }

                case 3:
                        {
                            cout << "Enter name" << endl;
                            cin >> n;
                            cout << "Enter email" << endl;
                            cin >> e;
                            cout << "Enter phone" << endl;
                            cin >> p;
                            cout << "Enter id" << endl;
                            cin >> id;
                            cout << "Enter Job Role" << endl;
                            cin >> jr;
                            NonTeachingStaff obj(id,jr,n,e,p);
                            obj.printDetails();
                            break;
                        }

                case 4:
                        {
                            cout << "Enter name" << endl;
                            cin >> n;
                            cout << "Enter email" << endl;
                            cin >> e;
                            cout << "Enter phone" << endl;
                            cin >> p;
                            cout << "Enter Roll no." << endl;
                            cin >> rn;
                            cout << "Enter CGPA" << endl;
                            cin >> cgpa;
                            Student obj(rn,cgpa,n,e,p);
                            obj.printDetails();
                            break;
                        }
                case 5:{
                        stop = 1;
                        break;
                        }
                default:
                    cout << "select valid option" << endl;
                    break;
            }
        }
    }
    return 0;
}
