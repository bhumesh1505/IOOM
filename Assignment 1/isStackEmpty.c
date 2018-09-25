#include "declarations.h"

int isStackEmpty(Stack s)
{
	int status = 0;
	if( s.top == NULL)
	{
		status = 1;	// yes queue is empty
	}
	return status;
}
