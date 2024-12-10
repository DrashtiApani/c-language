#include <stdio.h>

void loop(int start, int end)
 {
    if (start <= end) 
    {
        printf("%d\t", start);

        start++;
        loop(start, end);
    }
}

void main() 
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);    

    printf("Enter the ending number: ");
    scanf("%d", &end);

    loop(start, end);
}