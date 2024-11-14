#include <stdio.h>
#include <conio.h>

main ()
{
	int i,j,n,m=0,o=1;

	clrscr();

	printf("\n\n");

	for(i=1 ; i<=5 ;i++)
	{
		for(j=1 ; j<=i; j++)
			{
				if(j%2==0)
				{
					printf("%d",m);
				}
				else
				{
					printf("%d",o);
				}

			}
		printf("\n");
	}

	getch();
}