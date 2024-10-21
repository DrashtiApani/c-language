#include <stdio.h>
#include <conio.h>

main ()
{
	int a,b,c;

	clrscr();

	printf("Enter any year : ");
	scanf("%d",&a);

	printf("Enter any year : ");
	scanf("%d",&b);

	while(a<=b)
	{
		if(a%4 == 0)
		{
			printf("%d\t",a);
		}
		a++;
	}

	getch();


}