#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("not divide by zero....");
        return 0;
    }
}
int moduls(int a, int b)
{
    return a % b;
}
void main()
{

    int num;
    int a, b;
    do
    {
        printf("\n Enter 1 for + ");
        printf("\n Enter 2 for - ");
        printf("\n Enter 3 for * ");
        printf("\n Enter 4 for / ");
        printf("\n Enter 5 for %% ");
        printf("\n Enter 0 for the exit  \n\n");

        printf("Enter your choice :~");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        else if (num >= 1 && num <= 5)
        {
            printf("Enter the first number :~");
            scanf("%d", &a);
            printf("Enter the second number :~");
            scanf("%d", &b);
        }
        switch (num)
        {
        case 1:
            printf("\naddition is %d & %d  :~ %d\n", a, b, add(a, b));
            break;
        case 2:
            printf("\nsubtraction is %d & %d  :~ %d\n", a, b, subtraction(a, b));
            break;
        case 3:
            printf("\nmultiplaction  is %d & %d  :~ %d\n\n", a, b, multiplication(a, b));
            break;
        case 4:
            printf("\nDivision  is %d & %d  :~ %d\n\n", a, b, divide(a, b));
            break;
        case 5:
            printf("\nModulus  is %d & %d  :~ %d\n\n", a, b, moduls(a, b));
            break;

        default:
            printf("\n\n Invalid choice !!.. If you want any math operation then try again...\n");
        }
    } while (1);   
}