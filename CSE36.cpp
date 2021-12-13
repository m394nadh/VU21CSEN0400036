#include <stdio.h>
main()
{
	char ch;
    int Q,T;
    printf("my resturant menu\n");
    scanf("%c",&ch);
    printf("enter the quantity reuired of your food \n");
    scanf("%d",&Q);
    switch(ch)
    {
    	case 'B':
    	printf("you selected for burger");
		T = Q*200;
	     printf("the total bill = %d");
		 break;
		 case 'S':
		 printf("you selected for sandwich");
		 T = Q*150;
		 printf("the total bill = %d");
		 break;
		 case 'P':
		 printf("you selected pizza");
		 T = Q*500;
		 printf("the total bill = %d");	
		 break;
		 case 'F':
		 printf("you selected french fries ");
		 T = Q*50;
		 printf("the total bill = %d");
		 default :
		 printf("enter the one is invalid");
	}
	
}
