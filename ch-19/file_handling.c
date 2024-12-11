#include <stdio.h>

void main()
{

    FILE *fp;

    // fopen("Address || name","Mode");

    /*
    Mode :
    w => Write
    r => Read
    a => append
    */

    fp = fopen("data.txt","a");

    if(fp!=NULL){
        printf("File is open...");

        // fprintf(filePointer,"Statement || Message");

        fprintf(fp, "\nJaynesh Sarkar");

        fclose(fp);
    }else {
        printf("File is not open...");
    }
}