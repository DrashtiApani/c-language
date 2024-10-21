#include <stdio.h>
#include <conio.h>

main()
{
	int a = 1,n;

	clrscr():

	printf("Enter any number :");
	scanf("%d",&n);

	do
	{
		printf("%d\t",a++);

	}while(a<=n);


	getch();

}