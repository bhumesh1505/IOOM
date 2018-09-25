#include <bits/stdc++.h>
#include "item.h"
#include "Stack.h"
using namespace std;

int main()
{
    int id,quamtity,stop = 0 , n;
    string label;

    cout << "Enter Size of Stack " << endl;
    cin >> n;
    Stack stck(n);
    while(!stop)
    {
        int s;
        cout << "1 : push \n2 : pop\n3 : display\n4 : sort\n5 : delete middle\n6 : exit\n" << endl;
        cin >> s;
        switch(s)
        {
            case 1:
                cout << "\nEnter id , Quantity , label" << endl;
                cin >> id >> quamtity >> label;
                if(stck.push(id,quamtity,label))
                {
                    cout << "Successfully Pushed" << endl << endl;;
                }
                else
                {
                    cout << "Failed" << endl << endl;;
                }
                stck.display();
                break;
            case 2:
                stck.pop();
                stck.display();
                break;
            case 3:
                stck.display();
                break;
            case 4:
                stck.StackSort();
                stck.display();
                break;
            case 5:
                stck.deleteMiddle();
                stck.display();
                break;
            case 6:
                stop = 1;
                break;
            default:
                cout << "select valid options" << endl;
        }
    }
    return 0;
}
