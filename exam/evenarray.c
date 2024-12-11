#include <stdio.h>
void even(int *ptr)
{
    if (*ptr % 2 == 0)
    {
        printf("%d ",*ptr);
    }
    else
    {
        printf("There is no any even  numbers...."); 
    }
}
void main()
{
    int size;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("\n\n ^_^   input   ^_^ \n\n");

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d] :- ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n ^_^   Output   ^_^ \n\n");
    for (int i = 0; i < size; i++)
    {
        even(&a[i]);
    }
}

