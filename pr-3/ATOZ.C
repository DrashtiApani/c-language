#include <stdio.h>


main()
{
	char ch='a';

	do
	{
		printf("%c\t",ch++);
		ch+=3;

	}while(ch<='z');

	

}