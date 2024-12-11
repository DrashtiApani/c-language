#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("users.txt", "a");

    if (fp != NULL)
    {
        char email[20];
        char psw[20];

        printf("Enter your email : ");
        scanf("%s", &email);
        printf("Enter your password : ");
        scanf("%s", &psw);

        fprintf(fp,"EMAIL\t: %s\n",email);
        fprintf(fp,"PASSWORD: %s\n\n",psw);

        fclose(fp);
    }
    else
    {
        printf("File is not open...");
    }
}