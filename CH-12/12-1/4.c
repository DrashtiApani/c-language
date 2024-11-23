#include<stdio.h>

main()
{
    int size;

    printf("Enter any number :");
    scanf("%d",&size);
  
  int a[size];
  
    printf("\n\n ^_^   input of A  ^_^ \n\n");

    for(int i=0; i<size; i++)
    {
        printf("Enter the elements of a[%d] :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n ^_^   input of B  ^_^ \n\n");

    int b[size];

     for(int i=0; i<size; i++)
    {
        printf("Enter the elements of b[%d] :",i+1);
        scanf("%d",&b[i]);
    }

    printf("\n\n ^_^   Output of A   ^_^ \n\n");

    for(int i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n\n ^_^   Output of b   ^_^ \n\n");

    for(int i=0; i<size; i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n\n");

    int sum=0;   
    printf("\n\n ^_^   Array C is   ^_^ \n\n");
    
    for(int i=0; i<size; i++)
    {
      sum=a[i]+b[i];
      printf("%d\t",sum);
    }

}