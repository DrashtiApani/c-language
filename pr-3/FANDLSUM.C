#include <stdio.h>
#include <conio.h>

main()
{
	int n,first,last,sum;


	printf("Enter any number : ");
	scanf("%d",&n);

	last = n % 10;

	while(n>=10)
	{
		n = n / 10;
	}

	sum = n + last;

	printf("Addition of first and last intiger : %d", sum);

	// getch();



}