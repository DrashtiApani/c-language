#include <stdio.h>
#include <conio.h>

main ()
{
	int i,j;

	clrscr();

	printf("\n\n");

	for(i=5 ; i>=1 ;i--)
	{
		for(j=i ; j<=5
		; j++)
			{
				printf("\t %d",i);
			}
		printf("\n");
	}

	getch();
}