#include <stdio.h>
#include <conio.h>

main ()
{
	int a = 1,n;
	long int s = 1;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(a<=n)
	{
		s = s * a;
		printf("%d\t",a++);
	}
	printf("\n\nSum of all numbers\t : %ld",s);

	getch();

}