#include <stdio.h>
#include <conio.h>

main ()
{
	int x,y;

	clrscr();

	printf("\n\n");

	printf("\t value of x : ");
	scanf("\t %d",x);

	printf("\t value of y : ");
	scanf("\t %d",y);

	printf("\t Whole cube of (x+y) : %d",x*x*x*y*y*y+3*x*x*y+3*x*y*y);


	getch();



}
