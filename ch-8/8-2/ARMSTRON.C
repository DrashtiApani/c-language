#include <stdio.h>
#include <conio.h>

main()
{
	int rem , n, p,rev=0;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	p=n;

	while(n!=0)
	{
		rem = n % 10;
		rev = rev + rem * rem * rem;
		n = n / 10;
	}
	if(rev==p)
	{
		printf("%d is Armstrong number",p);
	}
	else
	{
		printf("%d is not Armstrong number",p);
	}

	getch();
}