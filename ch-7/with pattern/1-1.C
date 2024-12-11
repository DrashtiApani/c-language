#include <stdio.h>
#include <conio.h>

main()
{
	int i,s,j,a;

	

	for(i=1; i<=5; i++)
	{
		 printf("\n");
		 printf("\t");
		for(s=5; s>i; s--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);

		}
		   printf("\n");
	}



}