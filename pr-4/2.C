#include<stdio.h>


main()
{
	int i,j,n=11;

	
	for(i=11; i<=14; i++)
	{               	printf("\n");
		for(j=11; j<=i; j++)
		{
			printf("\t");
			printf("%d",n++);
		}
		printf("\n");
	}


}