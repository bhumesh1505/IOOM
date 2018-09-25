#include "item.h"
#include "Stack.h"

bool Stack::push(int id , int quantity , string label)
{

    bool status = false;
    try
    {
        if( Size < MAX_SIZE )
        {
            item x(id,quantity,label);
            s[Size] = x;
            top = Size;
            Size++;
            status = true;
        }
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
    return status;

}
