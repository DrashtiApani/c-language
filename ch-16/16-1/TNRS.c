#include<stdio.h>

int addition()
{
    int a,b;

    printf("\nEnter Value of A:~ ");
    scanf("%d",&a);


    printf("\nEnter Value of B:~ ");
    scanf("%d",&b);

    return a+b;
}
void main()
{
    // int ans = addition ();
    printf("\nAns \t :~ %d",addition());
}