/*
Develop A C Program That Takes N Integers And Arranges Them In Ascending Order Using Bubble Sort 
Ashutosh Khanal Upadhyay
1CR20CS033
31 August 2021
*/

#include<stdio.h>
int main()
{
  int i,j,a[30],n,temp=0;
  printf("Enter The Size Of Array:");
  scanf("%d",&n);
  printf("Enter The Array Elements:");
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Array Before Sorting:");
  for(i=0;i<=n-1;i++)
  {
    printf("%d\t",a[i]);
  }
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-1-i;j++)
   {
     if(a[j] > a[j+1])
    { 
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  }
  printf("\n");
  printf("Array After  Sorting:");
  for(i=0;i<=n-1;i++)
  {
    printf("%d\t",a[i]);
  }
}