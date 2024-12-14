#include <stdio.h>

int cube(int *ptr)
{
    return (*ptr) * (*ptr) * (*ptr);
}

void main()
{
    int size;

    printf("Enter the size of array :-");
    scanf("%d", &size);

    int array[size][size];

    printf("\n\n ^_^   input   ^_^ \n\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Element[%d][%d] :- ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", cube(&array[i][j]));
        }
        printf("\n");
    }
}