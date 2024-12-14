#include <stdio.h>

void main()
{
    FILE *efile, *ofile;

    efile = fopen("even_number.txt", "a");
    ofile = fopen("odd_number.txt", "a");


    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(ofile, "%d\n", i);
        }
        else
        {
           
            fprintf(efile, "%d\n ", i);
        }
    }
     fclose(efile);
     fclose(ofile);
    
}
