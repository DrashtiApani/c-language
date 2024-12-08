#include <stdio.h>
#include <string.h>

main()
{

    char str[20];
    char cpy[20];
    int index;

    printf("Enter you want :~");
    gets(str);

    for (int i = 0; i < strlen(str); i++) //strlen => size or '!0'
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            index = i;
        }
    }
    
    strlwr(str);

    strcpy(cpy,str);

    strrev(cpy);

    if(strcmp(str,cpy))
    {
        // str[index] -= 32;
        printf("%s is not pallidrone" , str);
    }
    else
    {
        // str[index] -= 32;
        printf("%s is  pallidrone", str);
    }
    
}