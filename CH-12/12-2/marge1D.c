#include <stdio.h>

main()
{
    int size1, size2;

    printf("Enter the number of elements : ");
    scanf("%d", &size1);

    printf("Enter the number of elements : ");
    scanf("%d", &size2);

    int a[size1], b[size2],marge[size1 + size2];

    printf("\n\n ^_^   input of A  ^_^ \n\n");

    for (int i = 0; i < size1; i++)
    {
        printf("Enter the elements of a[%d] :", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\n ^_^   input of B  ^_^ \n\n");

    for (int i = 0; i < size2; i++)
    {
        printf("Enter the elements of b[%d] :", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        marge[i+size1] = b[i];
    }

    printf("\n\n ~:  Marge Array  :~\n\n" );
    for (int i = 0; i < size1 + size2; i++)
    {
        printf(" %d\t",marge[i] );
    }
    
   

}