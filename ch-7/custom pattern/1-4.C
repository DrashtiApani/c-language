#include <stdio.h>
#include <conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=1; i<=5; i++)
	{

		for(j=i; j<=5; j++)
		{

		  printf("%d",j);

		}
		   printf("\n");
	}

	for(i=4; i>=1; i--)
	{

		for(j=i; j<=5; j++)
		{

		  printf("%d",j);

		}
		   printf("\n");
	}
	getch();
}