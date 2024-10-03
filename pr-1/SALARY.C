#include <stdio.h>
#include <conio.h>

main ()
{
	int s;

	clrscr();

	printf("\n\n");

	printf("Base Salary : ");
	scanf("%d",&s);

	printf("\nGross Salary : %d",s + 10%100 + 5%100 + 8%100 );

	getch();









}