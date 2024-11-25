#include<stdio.h>

main()
{
    int size;
    
    printf("Enter the number of elements : ");
    scanf("%d",&size);

    int a[size];

    printf("\n\n ^_^   input   ^_^ \n\n");

    for(int i = 0; i < size; i++)
    {
        printf("Enter the elements [%d] :",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n\n ^_^   output   ^_^ \n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; i < 5; i++)
        {
            if (a[i] < 0)
            {
                printf("%d\t",a[i]);
            }
        }
    }
   
    
    
}