#include <stdio.h>

void main()
{
    int n = 80;

    int *ptr;

    ptr = &n;

    printf("PTR :~ %d\n", ptr);     //garbage value or  address of n

    printf("PTR :~ %d\n", *ptr);    //value of n

}
