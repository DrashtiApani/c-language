#include<stdio.h>

main()
{
    int row,col,w,n,sum1=0,sum2=0;
    
    printf("Enter the number of Row : ");
    scanf("%d",&row);

   printf("Enter the number of Column : ");
    scanf("%d",&col);

    int a[row][col],large = 1;

    printf("\n\n ^_^   input   ^_^ \n\n");

    for(int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
         printf("Enter the elements [%d][%d] :",i,j);
        scanf("%d",&a[i][j]);
       } 
       printf("\n"); 
    }

    printf("\n\n ^_^   matrix   ^_^ \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           printf("%d\t",a[i][j]);
            
        }
        printf("\n"); 
    }   
  
    printf("\nEnter the number of Row : ");
    scanf("%d",&w);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (i==w)
           {
                 printf("%d ",a[i][j]);
                 sum1 = sum1 + a[i][j];
           }

            
        }
        printf("\n"); 
    }   

    printf(" ~~: Sum of Row is :~~ %d", sum1);

    printf("\nEnter the number of Column : ");
    scanf("%d",&n);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (j==n)
           {
                 printf("%d ",a[i][j]);
                 sum2 = sum2 + a[i][j];
           }
           
        }
        printf("\n"); 
    }   

    printf(" ~~: Sum of Row is :~~ %d", sum2);
}