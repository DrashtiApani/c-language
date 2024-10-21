#include <stdio.h>
#include <conio.h>

main()
{
	int n;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	for(a=1; n!=0; a++)
		{
			n = n / 10;
		}
	printf("Number of digits : %d",a);


	getch();


}
