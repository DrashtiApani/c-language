#include <stdio.h>
#include <conio.h>

main ()

{
	int a,b,c;

	

	printf("Enter any number : ");
	scanf("%d %d %d",&a,&b,&c);

	if(a==b && b==c && c==a)
	{
		 printf("All are equal numbers");

	}
	else if(a==b || b==c || c==a)
	{
		printf("Both number are equal");
	}
	else
	{
		if(a<b)
		{
			if(a<c)
			{
				printf("%d is minimum number",a);
			}
			else
			{
				printf("%d is minimum number",c);
			}
		}
		else
		{
			if(b<c)
			{
				printf("%d is minimum number",b);
			}
			else
			{
				printf("%d is minimum number",c);
			}

		}
	}

}
