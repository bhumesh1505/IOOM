#include "declarations.h"

Status_code pop( Stack *s , int *quantity , int *id , char *label)
{
	Status_code sc = SUCCESS;
	if(s->top == NULL)
	{
		sc = FAILURE;
	}
	else
	{
	    node *ptr;
		ptr = s->top;
		*quantity = ptr->quantity;
		*id = ptr->id;
		strcpy(label,ptr->label);
		s->top = s->top->next;
		s->Size = s->Size - 1;
		free(ptr);
	}
	return sc;
}
