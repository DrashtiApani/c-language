#include <stdio.h>

main()
{
    int row, col,sum = 0,mult;

    printf("Enter the number of Row : ");
    scanf("%d", &row);

    printf("Enter the number of Column : ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\n ^_^   input   ^_^ \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elements [%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    
    mult = row * col;
    printf("The average of 2D array is :- %d ", sum / mult);


    
}
