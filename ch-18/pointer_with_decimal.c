#include <stdio.h>

void main()
{
    int n = 25;

    int *ptr;

    ptr = &n;

    printf("Number :~ %p\n", &n);     

    printf("PTR :~ %x\n", ptr);

    printf("Number :~ %u\n", &n);     

    *ptr = 80;

    printf("Number :~ %d\n", n);
    printf("PTR :~ %d\n", *ptr);
}