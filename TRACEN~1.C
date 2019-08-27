#include<stdio.h>
#include<math.h>


void main()
{
	int a[10][10], i,j,r,c;
	int trace(int x[10][10], int r);
	float norm(int x[10][10], int r);
	clrscr();
	printf("\nEnter the no. of rows in the matrix A:");
	scanf("%d",&r);
	printf("\nEnter the no. of columns in the matrix A:");
	scanf("%d",&c);
	if(r!=c)
	{
		printf("\nNot a square matrix order");
		getch();
		exit(0);
	}
	else
	{
		printf("\nEnter the square matrix elements\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
				scanf("\n%d",&a[i][j]);
		}
		printf("\nThe entered matrix\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("\t%d",a[i][j]);
			}
			printf("\n");
		}
		printf("\nThe trace of the matrix is %d",trace(a,r));
		printf("\nThe norm of the matrix is %f",norm(a,r));
	}
	getch();
}
int trace(int x[10][10],int n)
{
	int i,tm=0;
	for(i=0;i<n;i++)
	{
		tm+=x[i][i];
	}
	return(tm);
}
float norm(int x[10][10],int n)
{
	int i,j;
	float n1,nm=0;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			nm+=x[i][j]*x[i][j];
		}
	}
	n1=sqrt(nm);
	return(n1);
}