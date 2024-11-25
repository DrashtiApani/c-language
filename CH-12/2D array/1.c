#include<stdio.h>

main()
{

    int size;

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    int a[size];

    printf("\n\n ~~:  Input of A :~~ \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter your Pasandida number a[%d] :~ ",i+1);
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; i < 5; i++)
        {
            if (a[i] > a[j])
            {
                 int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            
        }
        
    }

    for ( int  i = 0; i < size; i++)
    {
             printf("\n%d  ",a[i]);

    }
    
    

}