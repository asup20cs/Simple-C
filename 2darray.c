/*
Develop a program to introduce 2D Array manipulation and implement Matrix multiplication
17 August 2021
Ashutosh Khanal Upadhyay
1CR20CS033
*/
#include <stdio.h>
int main()
{
  int A[10] [10],B[10] [10],C[10] [10];
  int i,j,k;
  int m,n,p,q;
  /*Reads Order Of Matrix*/
  printf("\nEnter The Order Of Matrix A:");
  scanf("%d %d",&m,&n);
  printf("\nEnter The Order Of Matrix B:");
  scanf("%d %d",&p,&q);
  /*
 Checking If Multiplication Is Possible
 */
 if (n!=p)
 {
   printf("\nMatrix Multiplication Is Not Possible\n");
   return -1;
 }
 else
 {
   printf("Matrix Multiplcation Is Possible\n");
 }
 /*Reads The Elements Of Matrix*/
  printf("\nEnter The Elements Of Matrix A:");
  for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++)
    {
     scanf("%d",&A[i][j]);
    }
 }
  printf("\nEnter The Elements Of Matrix B:");
  for (i=0;i<p;i++)
  {
    for (j=0;j<q;j++)
    {
     scanf("%d",&B[i][j]);
    }
 }
 
  /*Print The Matrix*/
  printf("Matrix A\n");
   for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++)
     {
        printf("%d ",A[i][j]);
     }
    printf("\n");
 }
 printf("Matrix B\n");
   for (i=0;i<p;i++)
  {
    for (j=0;j<q;j++)
     {
        printf("%d ",B[i][j]);
     }
    printf("\n");
 }
 /*Matrix Multiplication*/
 for(i=0;i<m;i++)
 {
   for(j=0;j<q;j++)
   {
    C[i][j]=0;
    for(k=0;k<m;k++)
    {
      C[i][j]=C [i][j] + (A[i][k]*B[k][j]);
    }

   }
 }
 printf("Matrix C\n");
   for (i=0;i<m;i++)
  {
    for (j=0;j<q;j++)
     {
        printf("%d ",C[i][j]);
     }
    printf("\n");
 }

 return 0;
}
