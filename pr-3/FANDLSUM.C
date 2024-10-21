#include <stdio.h>
#include <conio.h>

main()
{
	int n,first,last,sum;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	last = n % 10;

	while(n>=10)
	{
		n = n / 10;
	}

	sum = n + last;

	printf("Addition : %d", sum);

	getch();



}