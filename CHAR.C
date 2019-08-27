/*name=sanath reddy
date=02/07/2019 */
#include<stdio.h>
#include<ctype.h>
void main()
{
	char character;
	clrscr();
		printf("\n enter the character:");
	character=getchar();
	if(isalpha(character))
		printf("\n%c is alphabet",character);
	else if(isdigit(character))
		printf("\n%c is a digit",character);
	else if(isspace(character))
		printf("\nwhite space");
	else
		printf("\n%c is a special character",character);
		getch();
 }