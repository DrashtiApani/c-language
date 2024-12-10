#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int a, b;  

    printf("Value of a : ", a);
    scanf("%d", &a);

    printf("Value of b : ", b);
    scanf("%d", &b);

    swap(&a, &b);

    printf("\nValue of a : %d", a);
    printf("\nValue of b : %d", b);
}