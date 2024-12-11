#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");

    if (fp != NULL) 
    {
        int a;

        printf("\nEnter the number of fruits :- ");
        scanf("%d", &a);

        fflush(stdin);

        char color[20];
        char name[20];

        printf("\n\n ~:Enter your favourite fruits and its color:~ \n");

        for (int i = 0; i < a; i++)
        {
            printf("\nName :- ");
            scanf("%[^\n]", &name);

            fflush(stdin);

            printf("Color :- ");
            scanf("%[^\n]", &color);

            fflush(stdin);

            fprintf(fp, "\n\nName :- %s", name);

            fprintf(fp, "\ncolor :- %s", color);
        }
    }
}
