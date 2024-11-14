#include <stdio.h>
#include <conio.h>

main()
{
	int i,s,j,a;


	clrscr();

	for(i=1; i<=5; i++)
	{
		 printf("\n");

		for(s=1; s<i; s++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{              printf("\t");
			if(i%2==0)
			{
				printf("%d",j);
			}
			else
			{
				printf("%c",j+64);
			}
		}
		   printf("\n");
	}

	getch();


}