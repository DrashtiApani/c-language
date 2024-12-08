#include<stdio.h>

main(){
	char name[20];
		
	printf("Enter any name: ");
	scanf("%[^\n]",&name);
	
	printf("Your Name : %s\n\n",name);
	
	int i;
	
	for(i = 0 ; name[i] != '\0' ; i++)
	{
		if(name[i]==32)
		{
			if(name[i+1]>=97 && name[i+1]<=122)
			{
				name[i+1]-=32;
			}	
		}
	}
	
	printf("\n\nName : %s",name);
}