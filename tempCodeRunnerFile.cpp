#include <stdio.h>
#include <string.h>
main()
{
    int size = 50;

    char string[size];

    printf("Enter name :- ");
    scanf("%[^\n]", &string);

    char copy[size];

    for (int i = 0; i < size; i++)
    {
        copy[i] = string[i];
    }

    int len = strlen(copy);

    int l = len - 1;
    int temp, i = 0;

    // while (i < l)
    // {
    //     temp = copy[i];
    //     copy[i] = copy[l];
    //     copy[l] = temp;
    //     l--;
    //     i++;
    // }

    int condition = 0;

    for (int i = 0; i < size; i++)
    {
        if (string[i] != copy[i])
        {
            condition = 1;
            break;
        }
    }

    if (condition == 1)
    {
        printf("This name is not palindrome... ");
    }
    else
    {
        printf("This name is palindrome.");
    }
}