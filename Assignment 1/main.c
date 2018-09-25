#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "declarations.h"


int main()
{
	Stack s;
	InitializeStack(&s);

    int quantity,id;
    char label[10];

    /*
	push(&s,5,50,"fifth");
	print(s);

	push(&s,2,20,"second");
	print(s);
	push(&s,3,30,"third");
	print(s);

	push(&s,4,40,"fourth");
	print(s);


	push(&s,1,10,"first");
	print(s);

	pop(&s,&quantity,&id,label);
	print(s);

	pop(&s,&quantity,&id,label);
	print(s);

	pop(&s,&quantity,&id,label);
	print(s);

	pop(&s,&quantity,&id,label);
	print(s);

	pop(&s,&quantity,&id,label);
	print(s);

	push(&s,5,50,"fifth");
	push(&s,2,20,"second");
	push(&s,1,10,"first");
	push(&s,3,30,"third");
	push(&s,4,40,"fourth");
	print(s);

    Sort(&s);

    print(s);
    printf("size = %d\n",s.Size);

    deleteMid(&s);
    print(s);

    */

    int stop = 0;
    while(!stop)
    {
        printf("\n1. Push \n2. Pop\n3. Print \n4. DeleteMid\n5. exit 6.sort\n\n");
        int swt;
        scanf("%d",&swt);
        switch(swt)
        {
            case 1:
                    printf("Enter ID,Quantity,label\n");
                    scanf("%d%d%s",&id,&quantity,label);
                    push(&s,id,quantity,label);
                    break;

            case 2:
                    pop(&s,&quantity,&id,label);
                    printf("Popped data\n id = %d , Quantity = %d , label = %s\n",id,quantity,label);
                    break;

            case 3: print(s);
                    break;
            case 4:
                    deleteMid(&s);
                    print(s);
                    break;

            case 5: stop = 1;
                    break;
            case 6: Sort(&s);
                    break;
        }
    }
    return 0;
}

