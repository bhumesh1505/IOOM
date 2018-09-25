#include <bits/stdc++.h>
#include "LinkedList.h"
#include "String.h"
using namespace std;

int main()
{
    int question;
    cout << "1 First Question " << endl;
    cout << "2 Second Question " << endl;
    cin >> question;
    if( question == 2 )
    {
        int stop = 0;
        int s;

        LinkedList ls;
        LinkedList ls1;
        LinkedList ls2;
        LinkedList ls4;
        while(!stop)
        {
            cout << "Enter following operators" << endl<<endl;
            cout << "1    +  Adds a ComplexInteger object at the end of the list.\n        OR\n        Appends another list at the end." << endl << endl;
            cout << "2    -  Deletes a ComplexInteger object from the end of the list." << endl << endl;
            cout << "3    *  Deletes the element at the specified no. from the beginning." << endl << endl;
            cout << "4    =  Assigns a list Object to another list reference.\n        OR\n        Creates a fresh List from an array of ComplexInteger Objects. " << endl << endl;
            cout << "5    << Left Shifts the contents of the list specified no. of times." << endl << endl;
            cout << "6    >> Right Shifts the contents of the list specified no. of times." << endl << endl;
            cout << "7    stop" << endl << endl;
            cin >> s ;
            switch(s)
            {
                case 1:
                        {
                            cout << "1  Adds a ComplexInteger object at the end of the list." << endl;
                            cout << "2  Appends another list at the end." << endl ;
                            int ss;
                            cin >> ss ;
                            if( ss == 1 )
                            {
                                int st = 1;
                                while(st == 1)
                                {
                                    cout << "Enter real and imaginary number" << endl;
                                    int i,r;
                                    cin >> r >> i;
                                    Complex c(r,i);

                                    ls + c;

                                    cout << "\nSelect option \n 1 : add more \n 0 : exit" << endl;
                                    cin >> st;
                                }
                                Display(ls);
                            }
                            else
                            {

                                cout << "Create 1st list " << endl;

                                int st = 1;
                                while(st == 1)
                                {
                                    cout << "Enter real and imaginary number" << endl;
                                    int i,r;
                                    cin >> r >> i;
                                    Complex c(r,i);

                                    ls1 + c;

                                    cout << "\nSelect option \n 1 : add more \n 0 : exit" << endl;
                                    cin >> st;
                                }

                                cout << "Create 2nd list to append \n";
                                st = 1;
                                while(st == 1)
                                {
                                    cout << "Enter real and imaginary number" << endl;
                                    int i,r;
                                    cin >> r >> i;
                                    Complex c(r,i);

                                    ls2 + c;

                                    cout << "\nSelect option \n 1 : add more \n 0 : exit" << endl;
                                    cin >> st;
                                }

                                cout << "Linked list 1 : " << endl;
                                Display(ls1);

                                cout << "Linked list 2 : " << endl;
                                Display(ls2);

                                ls1 = ls1 + ls2 ;

                                cout << "After ls1 + ls2 : " << endl;
                                Display(ls1);
                            }
                            break;
                        }

                case 2:
                        {
                            cout << "before deleting " << endl;
                            Display(ls);
                            cout << "after deleting " << endl;
                            -ls;
                            Display(ls);
                            break;
                        }

                case 3:
                        {
                            Display(ls);
                            cout << "select node to delete" << endl;
                            int n;
                            cin >> n;
                            ls*n;
                            Display(ls);
                            break;
                        }

                case 4:
                        {
                            cout << "1    Assigns a list Object to another list reference." << endl ;
                            cout << "2    Creates a fresh List from an array of ComplexInteger Objects."<< endl;
                            int ss ;
                            cin >> ss ;
                            if( ss == 1 )
                            {

                                cout << "Create list  " << endl;
                                int st = 1;
                                while(st == 1)
                                {
                                    cout << "Enter real and imaginary number" << endl;
                                    int i,r;
                                    cin >> r >> i;
                                    Complex c(r,i);

                                    ls4 + c;

                                    cout << "\nSelect option \n 1 : add more \n 0 : exit" << endl;
                                    cin >> st;
                                }
                                ls2 = ls4;
                                Display(ls2);

                            }
                            else
                            {
                                cout << "Create array" << endl;
                                vector <Complex> c;
                                int st = 1;
                                while(st == 1)
                                {
                                    cout << "Enter real and imaginary number" << endl;
                                    int i,r;
                                    cin >> r >> i;
                                    Complex c1(r,i);
                                    c.push_back(c1);

                                    cout << "\nSelect option \n 1 : add more \n 0 : exit" << endl;
                                    cin >> st;
                                }
                                ls2 = c ;
                                Display(ls2);
                            }
                            break;
                        }

                case 5:
                        {
                            Display(ls);
                            cout << "select no. of nodes to left shift" << endl;
                            int n;
                            cin >> n;
                            ls<<n;
                            Display(ls);
                            break;
                        }

                case 6:
                        {
                            Display(ls);
                            cout << "select no. of nodes to right shift" << endl;
                            int n;
                            cin >> n;
                            ls>>n;
                            Display(ls);
                            break;
                        }

                case 7:
                        {
                            stop = 1;
                            break;
                        }

                default:
                    break;
            }
        }
    }
    else
    {
        int ch,index;
        char str1[40];
        char str2[30];
        String s1("Bhumesh");
        int stop = 0;
        while(!stop)
        {

            cout<<"operator overload in string"<<endl;
            cout<<"1.string concatenation(+)"<<endl;
            cout<<"2.greater string (>=)"<<endl;
            cout<<"3.check equality of two strings(==)"<<endl;
            cout<<"4.not equal(!=)"<<endl;
            cout<<"5.character at given location ( [] )"<<endl;
            cout<<"6.Stop"<<endl;

            cin>>ch;
            switch(ch)
            {
                case 1:
                        {
                            cout<<"enter first string!!"<<endl;
                            scanf("%s",str1);
                            String s1(str1);
                            cout<<"enter second string!!"<<endl;
                            scanf("%s",str2);
                            String s2(str2);
                            String result;
                            result=s1 + s2;
                            cout<<"resultant string="<<endl;
                            display(result);

                            break;
                        }
                case 2:
                        {
                            cout<<"enter first string!!"<<endl;
                            scanf("%s",str1);
                            String s1(str1);
                            cout<<"enter second string!!"<<endl;
                            scanf("%s",str2);
                            String s2(str2);
                            int val=s1>=s2;
                            if(val>=0)
                            {
                                cout<<str1<<" "<<" is greater then "<<str2<<endl;
                            }
                            else
                            {
                                cout<<str1<<" "<<" is less then "<<str2<<endl;

                            }
                            break;

                        }
                case 3:
                        {
                            cout<<"enter first string!!"<<endl;
                            scanf("%s",str1);
                            String s1(str1);
                            cout<<"enter second string!!"<<endl;
                            scanf("%s",str2);
                            String s2(str2);

                            if(s1==s2)
                            {
                                cout<<"both strings are equal!!"<<endl;
                            }
                            else
                            {
                                cout<<"strings are not equal!!!"<<endl;

                            }
                            break;

                        }
                case 4:
                        {
                            cout<<"enter first string!!"<<endl;
                            scanf("%s",str1);
                            String s1(str1);
                            cout<<"enter second string!!"<<endl;
                            scanf("%s",str2);
                            String s2(str2);
                            int val=s1!=s2;
                            if(val==0)
                            {
                                cout<<"strings are equal!!"<<endl;
                            }
                            else
                            {
                                cout<<"string are not equal!!"<<endl;

                            }
                            break;
                        }
                case 5:
                        {
                            char s[50];
                            cout << "enter string" << endl;
                            cin >> s;
                            String s4(s);
                            cout<<"enter index value!!!"<<endl;
                            cin>>index;

                            cout<<s4[index]<<endl;
                            break;
                        }
                case 6:{
                        stop = 1;
                        break;
                    }
                default :
                    cout << "select valid option " << endl;
                    break;

            }

        }
    }
    return 0;
}
