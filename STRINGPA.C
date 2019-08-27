#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[200];
	int i,j,l,count=0;
	clrscr();
	printf("\nEnter the string\n");
	gets(a);
	l=strlen(a);
	for(i=0,j=l-1;i<l&&j>=0;i++,j--)
	{
	if(a[i]!=a[j])
		break;
	else
		count++;
	}
	if(count==l)
		printf("\n%s is a palindrome",a);
	else
		printf("\n%s is not a palindrome",a);
	getch();
}