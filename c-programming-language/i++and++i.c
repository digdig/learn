#include <stdio.h>
//The difference of i++ and ++i
main()
{
	int i;

	i=0;

	printf("here is i++.\n");
	printf("%d\n",i++);		//use the present value of i, after using it, add 1 to it.
	printf("%d\n",i);
	i=0;
	printf("here is ++i.\n"); //add 1 to the present value and use the changed value. After using it, no more add.
	printf("%d\n",++i);
	printf("%d\n",i);
}
