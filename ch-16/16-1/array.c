#include <stdio.h>
#include "function.c"

void main()
{
    int size;

    printf("Enter the number of elements : ");
    size = inputInt();

    int a[size];

    arrayInpput(size, a);
}