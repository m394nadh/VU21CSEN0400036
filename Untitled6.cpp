/*ENTER THE AREA OF TRIANGLE */
#include <stdio.h>
main()
{
	float base ,height,area = 0;
	printf("Enter the base of a triangle");
	scanf("%f",&base);
	printf("Enter the height of a triangle");
	scanf("%f",&height);
	area = 0.5*base*height;
	printf("area of a triangle %f\t",area);
	
}
