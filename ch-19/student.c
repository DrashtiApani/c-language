#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[100];
    float per;
   
};
void main()
{
    struct student s1;

    printf("enter your id\t:~");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    printf("enter your name\t:~");
    scanf("%s",s1.name);
    printf("enter your percentage\t:~");
    scanf("%f",&s1.per);
    printf("your id is %d\n",s1.rollno);
    printf("your name is %s\n",s1.name);
    printf("your percentage is %f\n",s1.per);
}