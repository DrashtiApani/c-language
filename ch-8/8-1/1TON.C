#include <stdio.h>
#include <conio.h>

main ()
{
	int a = 1;
	int n;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",n);

	while(a<=10)
	{
		printf("%d",n);
		a++;
	}

	getch();


}