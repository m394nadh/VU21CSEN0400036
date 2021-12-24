#include <stdio.h>
int main()
{
	int i=1,n=8;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		printf("%d\t",i);
		i++;
	}
	
}
