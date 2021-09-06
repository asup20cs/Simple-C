/*Prog-+ram To Print Square Root Of A Number And Execute With All Posssible Input Without Library Functions*/
#include <stdio.h>
int main()
{
  float i,num;
  printf("Enter The Number:");
  scanf("%f",&num);
  if (num<=0)
  {
    printf("Invalid Input");
    return 1;
  }
  for (i=0.00001;i*i<=num;i=i+0.00001);
  {
    printf("The Square Root Of Number: %f",i);
  }
 return 0;
}
