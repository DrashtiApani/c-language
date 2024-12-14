#include <stdio.h>
void main()
{
    char string[20];

    char *ptr[20];

    printf("\nEnter your Name :- ");
    scanf("%[^\n]", &string);

    int len = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        ptr[i] = &string[i];
        len++;
    }

    printf("\nThe length of string is :- %d\n", len);
}