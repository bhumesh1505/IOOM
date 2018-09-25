#include "declarations.h"
node *divide(node *p)
{
    node *q,*slow,*fast;
    slow = p;
    fast = p->next->next;

    while(fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
    }
    q = slow->next;
    slow->next = NULL;
    return q;
}
node *Merge(node *p,node *q)
{
    node *head,*tail;
    if( p == NULL || q == NULL )
    {
        printf("Error\n");
    }
    else
    {
        if( p->quantity < q->quantity )
        {
            head = q;
            q = q->next;
        }
        else
        {
            head = p ;
            p = p->next;
        }
        tail = head;
    }
    while( p && q )
    {
        if( p->quantity < q->quantity )
        {
            tail = tail->next = q;
            q = q->next;
        }
        else
        {
            tail = tail->next = p;
            p = p->next;
        }
    }
    if(p!=NULL)
    {
        tail->next = p;
    }
    else
    {
        tail->next = q;
    }
    return head;
}

node *mergeSort(node *head)
{
    node *head1,*head2;
    head1 = head;
    if(head != NULL && head->next != NULL )
    {
        head2 = divide(head1);

        head1 = mergeSort(head1);
        head2 = mergeSort(head2);
        head = Merge(head1,head2);
    }
    return head;
}

void Sort(Stack *s)
{
    /*
    node *ptr = s->top;
    s->top = mergeSort(ptr);
    */

    Stack temp;
    InitializeStack(&temp);
    Stack temp2;
    InitializeStack(&temp2);

    int quantity,id;
    char label[10];

    while(!isStackEmpty(*s))
    {
        pop(s,&quantity,&id,label);
        if(isStackEmpty(temp))
        {
            push(&temp,id,quantity,label);
        }
        else
        {
            while(!isStackEmpty(temp) && top(temp) > quantity )
            {
                int q,id1;
                char label1[10];
                pop(&temp,&q,&id1,label1);
                push(&temp2,id1,q,label1);
            }
            push(&temp,id,quantity,label);
            while(!isStackEmpty(temp2))
            {
                int q,id1;
                char label1[10];
                pop(&temp2,&q,&id1,label1);
                push(&temp,id1,q,label1);
            }
        }
    }
    s->Size = temp.Size;
    s->top = temp.top;
}
