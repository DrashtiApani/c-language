#include <stdio.h>

void main()
{
    int a[5] = {11, 22, 33,44, 55};

    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
       ptr[i] = &a[i];
    }

    for (int i = 0; i < 5; i++)
    {   
        printf("%u\t",*ptr[i]);
    }
}