#include "item.h"
#include "Stack.h"

item Stack::getTop()
{
    item x;
    try
    {
        if( !isEmpty() )
        {
            x = s[top];
        }
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
    return x;
}
