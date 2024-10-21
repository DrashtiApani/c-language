#include <stdio.h>
#include <conio.h>

main ()
{

	int d,r;

	clrscr();

	printf("\nEnter the value : ");
	scanf("%d",&d);

	printf("\nEnter the value : ");
	scanf("%d",&r);

	if(d<r)
	{
	printf("minimum value : %d",d);
	}
	else
	{
	printf("minimum value : %d",r);

	}


	getch();

}