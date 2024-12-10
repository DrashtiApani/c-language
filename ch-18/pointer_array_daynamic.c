#include <stdio.h>

void main()
{
    int size;   

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements [%d] :",i+1);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n\n");
}