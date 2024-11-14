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

		for(s=5; s>i; s--)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}

		}
		   printf("\n");
	}

	getch();


}