
#include "declarations.h"

void deleteMid(Stack *s)
{
    if( !isStackEmpty(*s) )
    {
        int siz = (s->Size)/2;

        Stack temp;
        InitializeStack(&temp);

        int quantity,id;
        char label[10];

        while(siz > 0)
        {
            if(!isStackEmpty(*s))
            {
                pop(s,&quantity,&id,label);
                push(&temp,id,quantity,label);
            }
            siz--;
        }
        if( !isStackEmpty(*s) )
        {
            pop(s,&quantity,&id,label);
        }
        while( !isStackEmpty(temp) )
        {
            pop(&temp,&quantity,&id,label);
            push(s,id,quantity,label);
        }
    }
}
