
#include <stdio.h>
#include <conio.h>

main()
{
	int x;
	int y;

	

	printf("\t value of x\t: ");
	scanf("\t %d",&x);

	printf("\t value of x\t: ");
	scanf("\t %d",&y);

	printf("\t Square of (x+b) : %d",x * x + 2 * x * y +y * y );

	printf("\n\n");

	printf("\t value of x\t: ");
	scanf("\t %d",&x);

	printf("\t value of x\t: ");
	scanf("\t %d",&y);

	printf("\t Square of (x-b) : %d",x * x - 2 * x * y +y * y );

	printf("\n\n");


	
}