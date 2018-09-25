#include "declarations.h"

void print(Stack s)
{
	if(isStackEmpty(s))
	{
		printf("Empty Stack\n");
	}
	else
	{
		node *ptr = s.top;
		while(ptr != NULL)
		{
			printf("id = %d , quantity = %d , label = %s\n",ptr->id,ptr->quantity,ptr->label);
			ptr = ptr->next;
		}
		printf("\n");
	}
}
