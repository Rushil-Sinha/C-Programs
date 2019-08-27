
   #include<stdio.h>
   void main()
    {
     int A[10][10],B[10][10],C[10][10],D[10][10];
     int i,j,r1,r2,c1,c2;
     clrscr();
     print("\n enter the number of rows matrix in A:");
     scanf("%d",&r1);
     printf("\n enter the number of colums in matrix A:");
     scanf("%d",&c1);
     printf("\n enter the number of rows in matrix B:");
     scanf("%d",&r2);
     printf("\n enter the number of colums in matrix B:");
     scanf("%d",&c2);
     if ((r1!=r2)||(c1!=c2))
      {
       printf("|N operation not possible matrices are not of same order");
       getch();
       exit(0);
      }
     else
      {
       printf("\n enter the metrix A elements:\n");
      for (i=0;i<r1;i++)
      {
       for (j=0;j<c1;j++)
	{
	 scanf("%d",&A[i][j]);
	}
      }
       printf("\n enter the matrix B elements:\n");
       for (i=0;i<r2;i++)
	{
	 for (j=0;j<c2;j++)
	  {
	   scanf("%d",&B[i][j]);
	  }
	}
	for (i=0;i<r1;i++)
	 {
	  for (j=0;j<c1;j++)
	   {
	    C[i][j]=A[i][j]+B[i][j];
	    D[i][j]=A[i][j]-B[i][j];
	   }
	 }
	 printf("\n matrix A \n");
	 for (i=0;i<r1;i++)
	  {
	   for (j=0;j<c1;j++)
	    {
	     printf("\t %d",A[i][j]);
	    }
	     printf("\n");
	  }
	   printf("\n matrix B \n");
	   for (i=0;i<r2;i++)
	    {
	     for (j=0;j<c2;j++)
	      {
	       printf("\n");
	      }
	    }
	     printf("\n matrix D=A-B \n");
	     for (i=0;i<r2;i++)
	      {
	       for (j=0;j<c2;j++)
	       {
		printf("\t %d",D[i][j]);
	       }
		printf("\n");
	      }
      }
       getch();
    }