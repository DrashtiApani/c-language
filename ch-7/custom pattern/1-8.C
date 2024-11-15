#include <stdio.h>
#include <conio.h>

main()
{
	int s,i,j;

	clrscr();

	for(i=5; i>=1; i--)
	{
		   printf("\n");

		for(j=1; j<=i; j++)
		{
		  printf("%d",j);
		}
		for(s=5; s>i; s--)
		{
		  printf("  ");
		}
		for(j=i; j>=1; j--)
		{
		  printf("%d",j);
		}
		printf("\n");
	}



	getch();
}