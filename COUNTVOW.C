#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,l,vcount=0,ccount=0,dcount=0,wcount=0,scount=0;
	clrscr();
	printf("\nEnter the string:");
	gets(str);
	strlwr(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(isalpha(str[i]))
		{
			if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
				vcount++;
			else
				ccount++;
		}
		else
		{
			if(isdigit(str[i]))
				dcount++;
			else if(isspace(str[i]))
				wcount++;
			else
				scount++;
		}
	}
	printf("\nVowels- %d",vcount);
	printf("\nConsonants- %d",ccount);
	printf("\nDigits- %d",dcount);
	printf("\nSpecial Characters- %d",scount);
	printf("\nWhite Spaces- %d",wcount);
	getch();
}