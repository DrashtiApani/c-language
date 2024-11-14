#include <stdio.h>
#include <conio.h>

main ()
{
	int i,j,n=11;

	char a ='a';

	clrscr();

	printf("\n\n");

	for(i=1 ; i<=5 ;i++)
	{
		for(j=1 ; j<=i; j++)
			{
				if(i%2==0)
				{
					n+=11;
					printf("\t%d", n);
				}
				else
				{
					printf("\t%c",a);
					a++;
				}
			}
		printf("\n");
	}

	getch();
}