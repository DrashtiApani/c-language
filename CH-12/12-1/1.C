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

    for(int i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n\n");
    int sum = 0;
    for(int i=0;i<size;i++)
        sum=sum+a[i];

    printf("Sum of Array : %d",sum);
    printf("\n\n");
    printf("Average of Array :%.2f",(float)sum/size);
    printf("\n\n");
    
}