#include<stdio.h>
#include<string.h>

main()
{
	int i , length = 0 , a = 0,index ;
	char size [100],str[50],name[50];
	
	printf(" Enter Your pasandida name :");
	scanf("%s", &size);
	
     for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            index = i;
        }
    }

    for (int i = 0; name[i] !='\0' ; i++)
	
    {
        if (name[i]>='a' && name[i]<='z')
        {
            name[i] = name[i]-32;
        }   
    }

	for(i = 0 ; size[i]!='\0'; i++)
	{
		length++; 	
	}
	
	for( i = 0 ; size[i] > length ; i++)
	{
		if( size[i]==size[length-i-1])
		{
			a=1;
		}
		else
		{
			a=0;
		}
	}
    
    printf("\n");
	
	if( a == 1)
	{
		printf("%s is palindrome", size);
	}
	else
	{
		printf("%s is not palindrome ", size);
	}
}