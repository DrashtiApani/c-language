#include <stdio.h>

void odd(int a)
{
    if (a % 2 != 0)
    {
        printf("%d ", a);
    }
}

 void main()
{
    int size;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int a[size];

    printf("\n\n ^_^   input   ^_^ \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements [%d] :", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        odd(a[i]);
    }
}