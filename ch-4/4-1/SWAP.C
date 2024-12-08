#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	

	printf("Enter the value of a :\t");
	scanf("%d",&a);

	printf("Enter the value of b :\t");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\na : %d",a);
	printf("\nb : %d",b);

	
}