#include "item.h"
#include "Stack.h"

item Stack::pop()
{

    item x;
    try
    {
        if( !isEmpty() )
        {
            x = s[top];
            Size--;
            if( Size > 0){
                top--;
            }
            else
            {
                top = -1;
            }
        }
        else
        {
            cout << "Failed" << endl;
        }
    }
    catch(exception e)
    {
        cout << e.what() <<endl;
    }
    return x;
}
