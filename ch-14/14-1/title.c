#include <stdio.h>

main ()
{
    
    char name[50];

    printf("Enter your Name : ");
    scanf("%[^\n]",&name);

    printf("\n\n");
    
    for (int i = 0; name[i] != '\0' ; i++)
    {
        if (name[i-1] == ' ')
        {
            name[i] = name[i]-32;
        }   
    }   
   
    name[0] = name[0]- 32;
    printf("Name\t : %s",name);
    

}