/*
Develop A Program Using Pointer To Compute The Sum,Mean,And Standard Deviation Of All Elements Stored In An Array In N Elements.
Ashutosh Khanal Upadhyay
1CR20CS033
31 August 2021
*/

#include <stdio.h>
#include <math.h>
int main()
{
  int i,n;
  float sum,mean,sd,std;
  printf("Enter The Number Of Elements:");
  scanf("%d",&n);
  float a[n],*p;
  printf("\nEnter The Elements:");
  p=a;
  for(i=0;i<n;i++)
  {
    scanf("%f",p);
    p++;
  }
  sum=0;
  p=a;
  for(i=0;i<n;i++)
  {
    sum=sum+*p;
    p++;
  }
  mean=0;
  mean=sum/n;
  p=a;
  std=0;
  for(i=0;i<n;i++)
  {
    std=std+pow((*p-mean),2);
    p++;
  }
  sd=sqrt(std/n);
  printf("\nSum=%f",sum);
  printf("\nMean=%f",mean);
  printf("\nStandard Deviation=%f",sd);
  return 0;
}