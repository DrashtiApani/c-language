#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int chemistry;
    int maths;
    int physics;
};
void main()
{
    int size;
    printf("Enter student number:");
    scsizenf("%d", &size);
    printf("\n\n");

    struct student s[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);

        printf("Enter your name :~");
        scanf("%s", &s[i].name);

        printf("Enter your roll no :~");
        scanf("%d", &s[i].roll_no);

        printf("Enter your chemestry marks :~");
        scanf("%d", &s[i].chemistry);

        printf("Enter your mathamatics marks :~");
        scanf("%d", &s[i].maths);

        printf("Enter your physic marks :~");
        scanf("%d", &s[i].physics);
        printf("\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        int total = s[i].chemistry + s[i].maths + s[i].physics;
        float percentage = (float)total / 3;

        printf("\nStudent Data %d:\n\n", i + 1);

        printf("Name :- %s\n", s[i].name);
        printf("Roll no :- %d\n", s[i].roll_no);
        printf("Chemestry marks :- %d\n", s[i].chemistry);
        printf("Mathamatics marks :- %d\n", s[i].maths);
        printf("Physic marks :- %d\n", s[i].physics);
        printf("Total marks :- %d\n", total);
        printf("Percentage :- %.2f\n", percentage);
    }
}
