#include<stdio.h>
#include<conio.h>
main()
{
	 float a,b,c;

	 clrscr();

	 printf("\n\n");

	 printf("Maths:");
	 scanf("%f",&a);

	 printf("English:");
	 scanf("%f",&b);

	 printf("Science:");
	 scanf("%f",&c);

	 printf("average is:%.2f",(a+b+c)/3);
	 getch();
}