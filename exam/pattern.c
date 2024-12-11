#include <stdio.h>


main()
{
	int i,s,j,a;

	for(i=10; i>=5; i--)
	{
	
		for(s=5; s<i; s++)
		{
			printf(" ");
		}
		for(j=i; j<=10; j++)
		{
			printf("%d",j);

		}
		   printf("\n");
	}
	

}