#include <stdio.h>
main()
{
	int x,y,A,S,M,D,R;
	printf("enter a number");
	scanf("%d%d",&x,&y);
	A= x+y;
	S = x-y;
	M = x*y;
	D = x/y;
	R = x%y;
	printf("sum of 2 numbers%d\n",A);
	printf("subtraction of 2 numbers%d\n",S);
	printf("multiplication of 2 numbers%d\n",M);
	printf("division of 2 numbers%d\n",D);
	printf("Reminder of 2 numbers%d\n",R);
}
