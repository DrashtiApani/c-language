#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=41; i<=45; i++)
	{               	printf("\n");
		for(j=41; j<=i; j++)
		{
			printf("\t");
			printf("%d",j);
		}
		printf("\n");
	}

	getch();

}