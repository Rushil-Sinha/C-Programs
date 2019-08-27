#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[200],s2[100];
	void copy(char *p1, char *p2);
	clrscr();
	printf("\nEnter the string\n");
	gets(s1);
	copy(s1,s2);
	printf("\nThe original string is %s",s1);
	printf("\nThe copied string is %s",s2);
	getch();
}
void copy(char *p1, char *p2)
{
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}