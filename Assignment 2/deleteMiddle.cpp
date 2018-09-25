#include "item.h"
#include "Stack.h"

void Stack::deleteMiddle()
{
    try
    {
        if(!isEmpty())
        {
            Stack temp(MAX_SIZE);
            item x;
            int siz = Size / 2;
            for(int i = 0 ; i < siz ; i++)
            {
                x = pop();
                temp.push( x.getId() , x.getQuantity() , x.getLabel() );
            }
            pop();
            for(int i = 0 ; i < siz ; i++)
            {
                x = temp.pop();
                push( x.getId() , x.getQuantity() , x.getLabel() );
            }
            cout << "deleted successfully" << endl;
        }
        else
        {
            cout << "Stack already Empty" << endl;
        }
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }

}
