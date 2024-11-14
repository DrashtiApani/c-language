#include <stdio.h>
#include <conio.h>

main ()
{
	int i,j;

	clrscr();

	printf("\n\n");

	for(i=1 ; i>=65 ;i--)
	{
		for(j=i ; j<=65; j++)
			{
				printf("\t %d",j);
			}
		printf("\n");
	}

	getch();
}