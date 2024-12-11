#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("users.txt", "r");

    if (fp != NULL)
    {
        char msg[20];

        // fscanf(filePointer, "Formate Specifier",address of variable);
        fscanf(fp,"%[^\b]",&msg);

        printf("%s",msg);

        fclose(fp);
    }
    else
    {
        printf("File is not open...");
    }
}