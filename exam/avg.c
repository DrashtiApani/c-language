#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float avg;

    printf("\n\n ~:Enter Your Obtain Mark Out Of 100 :~ \n\n");

    printf("Enter Your maths mark\t:~ ");
    scanf("%d", &sub1);

    printf("Enter Your English mark\t:~ ");
    scanf("%d", &sub2);

    printf("Enter Your Science mark\t:~ ");
    scanf("%d", &sub3);

    printf("Enter Your Hindi mark\t:~ ");
    scanf("%d", &sub4);

    printf("Enter Your Sanskrit mark\t:~ ");
    scanf("%d", &sub5);

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("\nAverage Marks : %.2f", avg);

    printf("\n");

    if (avg >= 90)
    {
        printf("\nGrade : A+");
    }
    else if (avg >= 80)
    {
        printf("\nGrade : A");
    }
    else if (avg >= 70)
    {
        printf("\nGrade : B+");
    }
    else if (avg >= 60)
    {
        printf("\nGrade : B");
    }
    else if (avg >= 50)
    {
        printf("\nGrade : C");
    }
    else if (avg >= 33)
    {
        printf("\nGrade : D");
    }
    
    else
    {
        printf("\nGrade : Bhai tu rehne de.......");
    }

}