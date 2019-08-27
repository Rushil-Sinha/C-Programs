// Name: Rushil Sinha
// Date: 09/07/2019

#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,s=0,r;
	clrscr();
	printf("\nEnter the number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	printf("\n%d is the reverse number",s);
	if (s==m)
		printf("\n%d is a palindrome number",m);
	else
		printf("\n%d is not a palindrome number",m);
	getch();
}