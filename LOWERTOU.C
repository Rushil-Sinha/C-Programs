#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[200];
	int i=0;
	clrscr();
	printf("\nEnter the string\n");
	gets(str);
	while (str[i]!='\0')
	{
		if ((str[i]>='a')&&(str[i]<='z'))
			str[i]=str[i]-32;
		else if ((str[i]>='A')&&(str[i]<='Z'))
			str[i]=str[i]+32;
		i++;
	}
	printf("\nThe converted string\n");
	puts(str);
	getch();
}
