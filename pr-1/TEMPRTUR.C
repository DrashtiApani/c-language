
#include <stdio.h>
#include <conio.h>

main ()
{
	float c;

	clrscr();

	printf("\n\n");

	printf(" Enter the value of temprature in celsius : ");
	scanf("%f",&c);

	printf("\n Temprature in Fahrenheit : %.2f \n",(c * 9 / 5) + 32 );

	getch();










}