#include "item.h"
#include "Stack.h"

void Stack::display()
{
    try
    {
        if( !isEmpty() )
        {
            cout << "\tid\tquantity\tlabel"<<endl<<endl;
            for(int i = Size-1;i>=0;i--)
            {
                cout << "\t" << s[i].getId() << "\t" << s[i].getQuantity() << "\t\t" << s[i].getLabel() << endl;
            }
        }
        else
        {
            cout << "Stack is Empty !" << endl;
        }
        cout <<endl;
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
}
