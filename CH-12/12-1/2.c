#include<stdio.h>

main()
{
    int size;

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    int a[size];

    for(int i=0; i<size; i++)
    {
        printf("Enter the elements [%d] :",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n\n");

    printf("Length of an Array: %d",size);

    printf("\n\n"); 
    
}
