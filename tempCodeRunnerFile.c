#include <stdio.h>


void main()
{
    int size;

    printf("Enter the size of 1D array :- ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d] :- ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
          if (a[i] % 2 == 0)
    {
        printf("%d ", a[i]);
    }
    }
}

