#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[100];
	void oddevensum(int a[],int);
	clrscr();
	printf("\nEnter the number count:");
	scanf("%d",&n);
	printf("\nenter the numbers\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The entered elements\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	if(n>0)
		oddevensum(a,n);
	else
		printf("\nThe count should be greater than 0");
	getch();
}
void oddevensum(int a[],int n)
{
	int i,esum=0,osum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			esum=esum+a[i];
		else
			osum=osum+a[i];
	}
	printf("\nThe sum of even no is %d",esum);
	printf("\nThe sum of odd no is %d",osum);
}
