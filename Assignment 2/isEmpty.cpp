#include "item.h"
#include "Stack.h"

bool Stack::isEmpty()
{
    try
    {
        bool status = false;
        if( Size == 0 )
        {
            status = true;
        }
        return status;
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
}
