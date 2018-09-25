#include "declarations.h"

Status_code push(Stack *s, int id , int quantity , char *label)
{
	Status_code sc = SUCCESS;
	node *ptr = makeNode(id,quantity,label);
	if(ptr == NULL)
	{
		sc = FAILURE;
	}
	else
	{
		ptr->next = s->top;
		s->top = ptr;
		s->Size = s->Size + 1;
	}
	return sc;
}
