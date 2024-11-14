#include <stdio.h>
#include <conio.h>

main()
{
	int i,s,j,a;

	clrscr();

	for(i=1; i<=5; i++)
	{
		 printf("\n");
		 printf("\t");

		for(s=1; s<i; s++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);

		}
		   printf("\n");
	}
	getch();


}