#include <stdio.h>
#include <conio.h>


main()
{
   int p;
   int r;
   int n;

   clrscr();

   printf("Enter The Value Of pricipal amount :");
   scanf ("%d",&p);
   printf("enter the rate:");
   scanf("%d",&r);
   printf("enter the number of year:");
   scanf("%d",&n);

   printf("Simple Intrest is : %d",p*r*n/100);

   getch();

}