/* Name: Rushil sinha
   Date: 03/07/19 */

#include<stdio.h>
#include<conio.h>
void main()
{
	int f1,f2,f3,i,n;
	clrscr();
	f1=0;
	f2=1;
	printf("\n Enter the number of terms to be generated:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nCount must be greater than zero");
	}
	else
	{
		printf("\nFibonacci series of %d numbers\n",n);
		if(n==1)
			printf ("%d",f1);
		else if (n==2)
			printf ("%d\t%d",f1,f2);
		else
		{
			printf("\n%d\t%d",f1,f2);
			for (i=2;i<n;i++)
			{
				f3=f1+f2;
				printf("\t%d",f3);
				f1=f2;
				f2=f3;
			}//for loop
		}
	}
	getch();
}
