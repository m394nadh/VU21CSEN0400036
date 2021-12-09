#include <stdio.h>
int main()
{
	int A ,Basic,hra ,pre,net;
	scanf("%d",&A);
	Basic = A*10/100;
	hra = A*20/100;
	pre = A+Basic+hra;
	net = pre - 1000-500-1000;
	printf("%d",net);
	return 0 ;
}
