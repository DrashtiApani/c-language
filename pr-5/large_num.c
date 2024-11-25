#include<stdio.h>

main()
{
    int row,col;
    
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


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            }
            
        }
        
    }
    
    printf("The largest element is :~~ %d",large);
  
}