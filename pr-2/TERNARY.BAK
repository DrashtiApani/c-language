#include <stdio.h>
#include <conio.h>

main ()
{
	int mark;
	char Grade;

	clrscr();

	printf("\n\nEnter Your Percantage : ");
	scanf("%d",&mark);

	// By ternary

	(mark>=91 && mark<=100)
	       ?Grade = 'A'
	       :(mark>=81 && mark<=90)
			?Grade = 'B'
			:(mark>=71 && mark<=80)
				?Grade = 'C'
				:(mark>=61 && mark<=70)
					?Grade = 'D'
					:(mark>=33 && mark<=60)
						?Grade = 'E'
						:(Grade = 'F');

	// By switch

	switch(Grade)
	{
		case'A':
			printf("\nExcellent Performance ...");
			break;
		case'B':
			printf("\nWell Done ...");
			break;
		case'C':
			printf("\nGood Job ...");
			break;
		case'D':
			printf("\nYour are pass ...");
			break;
		case'E':
			printf("\nYou have to do more practice ...");
			break;
		case'F':
			printf("\nTu rehne de kheti kar ...");
			break;
	}
	if(Grade>='A' && Grade<='E')
	{
		printf("\n\nWoho..! Congratulations You can go for your next level");
	}
	else
	{
		printf("\n\nKoi jarurat nahi padhne ki...");
	}

	getch();

}