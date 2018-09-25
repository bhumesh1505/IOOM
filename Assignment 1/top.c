#include "declarations.h"

int top(Stack s)
{
    if( !isStackEmpty(s) )
    {
        return s.top->quantity;
    }
    return 0;
}
