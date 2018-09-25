#include "item.h"
#include "Stack.h"

void Stack::StackSort()
{
    try
    {
        Stack temp(MAX_SIZE);
        item x,y;
        while( !isEmpty() ) //  !s.isEmpty()
        {
            x = pop();
            temp.push( x.getId() , x.getQuantity() , x.getLabel() );
        }
        while( !temp.isEmpty() )
        {
            x = temp.pop();
            if( !isEmpty() )    // insert in proper position in stack
            {
                while( !isEmpty() && getTop().getQuantity() > x.getQuantity()  )
                {
                    y = pop();
                    temp.push( y.getId() , y.getQuantity() , y.getLabel() );
                }
            }
            push( x.getId() , x.getQuantity() , x.getLabel() );
        }
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
}

