#include "declarations.h"
node *makeNode(int id,int quantity , char *label)
{
	node *p = (node*)malloc(sizeof(node));
	if(p)
	{
		p->id = id;
		p->quantity = quantity;
		strcpy(p->label,label);
		p->next = NULL;
	}
	return p;
}
