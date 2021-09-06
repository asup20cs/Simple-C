/*
Program To Convert Binary Number To Decimal Number
Ashutosh Khanal Upadhyay
1CR20CS033
24 August 2021
*/
#include <stdio.h>
int btod (int);
int main()
{
  int binary,deci;
  printf("Enter Nummber In Binary: ");
  scanf("%d",&binary);
  deci = btod(binary);
  printf("Decimal Equivalent Of %d is %d\n",binary,deci);
  return 0;
}
int btod (int bin)
{
  if (bin==0)
  {
    return 0;
  }
  else
  {
    return(bin%10+btod (bin/10)*2);
  }
}
